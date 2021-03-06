#include "board.h"
#include "const_game.h"
#include "resources.h"
#include "rules.h"
#include "validators.h"

extern int	g_borders[GAME_SIZE];
int			g_final_solution[ROWS][COLS];
int			g_found_final_solution = 0;

int		should_stop_checking(int idx)
{
	return ((idx == GAME_SIZE) || g_found_final_solution);
}

void	handle_final_solution(int board[ROWS][COLS])
{
	g_found_final_solution = 1;
	copy_board(board, g_final_solution);
}

int		check_board(int board[ROWS][COLS], int i, int idx)
{
	int row_or_col;

	row_or_col = 0;
	while (row_or_col < idx / ROWS || row_or_col < idx % COLS)
	{
		if (i == board[row_or_col][idx % COLS] ||
			i == board[idx / ROWS][row_or_col])
			return (0);
		row_or_col++;
	}
	return (1);
}

void	modify_board(int board[ROWS][COLS], int idx)
{
	int test_board[ROWS][COLS];
	int is_valid;
	int i;

	if (should_stop_checking(idx))
	{
		if (ft_is_valid_solution(board))
			handle_final_solution(board);
		return ;
	}
	i = 1;

	while (i <= ROWS)
	{
		is_valid = 1;
		copy_board(board, test_board);
		is_valid = check_board(board, i, idx);
		if (is_valid)
		{
			test_board[idx / ROWS][idx % COLS] = i;
			modify_board(test_board, idx + 1);
			test_board[idx / ROWS][idx % COLS] = 0;
		}
		i++;
	}
}

int		solve_board(void)
{
	int	start_idx;
	int	board[ROWS][COLS];

	start_idx = 0;
	create_board(board);
	modify_board(board, start_idx);
	if (!g_found_final_solution)
		return (show_error());
	show_board(g_final_solution);
	return (0);
}
