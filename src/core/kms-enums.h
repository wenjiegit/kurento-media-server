#ifndef __KMS_SDP_ENUMS_H__
#define __KMS_SDP_ENUMS_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define KMS_MEDIA_TYPE (kms_media_type_get_type())

GType kms_media_type_get_type(void) G_GNUC_CONST;

typedef enum _KmsMediaType {
	KMS_MEDIA_TYPE_UNKNOWN,
	KMS_MEDIA_TYPE_AUDIO,
	KMS_MEDIA_TYPE_VIDEO
} KmsMediaType;

#define KMS_SDP_MODE (kms_sdp_mode_get_type())

GType kms_sdp_mode_get_type(void) G_GNUC_CONST;

typedef enum _KmsSdpMode {
	KMS_SDP_MODE_SENDRECV,
	KMS_SDP_MODE_SENDONLY,
	KMS_SDP_MODE_RECVONLY,
	KMS_SDP_MODE_INACTIVE
} KmsSdpMode;

G_END_DECLS


#endif /* __KMS_SDP_ENUMS_H__ */