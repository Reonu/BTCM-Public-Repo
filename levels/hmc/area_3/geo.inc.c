#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 637, 0, hmc_dl_Cube_009_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_FORCE, hmc_dl_Cube_009_mesh_layer_0),
			GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_Cube_009_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 637, 0, hmc_dl_vis_001_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_vis_001_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_3[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 21572, 0, -100, 21572, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_3_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, hmc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};