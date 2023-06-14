#include SO_LONG_H
#include SO_LONG_H

#include "utils/utils.h"
#include "mlx/mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

typedef struct pics
{
	void	*pics_ground;
	void	*pics_plr
	void	*pics_ext
	void	*pics_walls;
	void	*pics_collect;
	int		lengh;
	int		width;
	char	*plr;
	char	*ground;
	char	*walls;
	char	*collect;
	char	*ext;
}					t_pic

typedef struct count
{
	char	ext;
	char	collect;
	char	plr;
	char	wall;
	char	space;
	int		count_a;
	int		count_b;
	int		count_c;
}					t_count
