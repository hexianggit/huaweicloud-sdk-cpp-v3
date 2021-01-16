#ifndef HUAWEICLOUD_SDK_ECS_V2_EcsExport_H_
#define HUAWEICLOUD_SDK_ECS_V2_EcsExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_ECS_V2_SHARED)
#		define HUAWEICLOUD_ECS_V2_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_ECS_V2_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_ECS_V2_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_ECS_V2_EcsExport_H_