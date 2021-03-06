/* Copyright 2019-2020 National Research Foundation (SARAO)
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 *
 * This file is automatically generated. Do not edit.
 */

#ifndef SPEAD2_COMMON_LOADER_MLX5DV_H
#define SPEAD2_COMMON_LOADER_MLX5DV_H

#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif
#include <spead2/common_features.h>

#if SPEAD2_USE_MLX5DV

#include <infiniband/mlx5dv.h>

#undef mlx5dv_is_supported
#undef mlx5dv_query_device
#undef mlx5dv_create_wq
#undef mlx5dv_init_obj

namespace spead2
{

extern bool (*mlx5dv_is_supported)(struct ibv_device *device);
extern int (*mlx5dv_query_device)(struct ibv_context *ctx_in, struct mlx5dv_context *attrs_out);
extern struct ibv_wq *(*mlx5dv_create_wq)(struct ibv_context *context, struct ibv_wq_init_attr *wq_init_attr, struct mlx5dv_wq_init_attr *mlx5_wq_attr);
extern int (*mlx5dv_init_obj)(struct mlx5dv_obj *obj, uint64_t obj_type);

} // namespace spead2

#endif // SPEAD2_USE_MLX5DV
#endif // SPEAD2_COMMON_LOADER_MLX5DV_H
