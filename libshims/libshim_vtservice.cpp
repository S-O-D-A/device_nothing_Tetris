/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <media/AudioTrack.h>

#include <new>
#include <string>

extern "C" __attribute__((visibility("default")))
void AudioTrackCtorCompat(
        android::AudioTrack* self,
        audio_stream_type_t streamType,
        uint32_t sampleRate,
        audio_format_t format,
        audio_channel_mask_t channelMask,
        size_t frameCount,
        audio_output_flags_t flags,
        const android::wp<
                android::AudioTrack::IAudioTrackCallback>& callback,
        int32_t notificationFrames,
        audio_session_t sessionId,
        android::AudioTrack::transfer_type transferType,
        const audio_offload_info_t* offloadInfo,
        const android::content::AttributionSourceState& attributionSource,
        const audio_attributes_t* attributes,
        bool doNotReconnect,
        float maxRequiredSpeed,
        audio_port_handle_t selectedDeviceId)
        __asm__(
                "_ZN7android10AudioTrackC1E"
                "19audio_stream_type_t"
                "j"
                "14audio_format_t"
                "20audio_channel_mask_t"
                "m"
                "20audio_output_flags_t"
                "RKNS_2wpINS0_19IAudioTrackCallbackEEE"
                "i"
                "15audio_session_t"
                "NS0_13transfer_typeE"
                "PK20audio_offload_info_t"
                "RKNS_7content22AttributionSourceStateE"
                "PK18audio_attributes_t"
                "bfi");

extern "C" __attribute__((visibility("default")))
void AudioTrackCtorCompat(
        android::AudioTrack* self,
        audio_stream_type_t streamType,
        uint32_t sampleRate,
        audio_format_t format,
        audio_channel_mask_t channelMask,
        size_t frameCount,
        audio_output_flags_t flags,
        const android::wp<
                android::AudioTrack::IAudioTrackCallback>& callback,
        int32_t notificationFrames,
        audio_session_t sessionId,
        android::AudioTrack::transfer_type transferType,
        const audio_offload_info_t* offloadInfo,
        const android::content::AttributionSourceState& attributionSource,
        const audio_attributes_t* attributes,
        bool doNotReconnect,
        float maxRequiredSpeed,
        audio_port_handle_t selectedDeviceId) {
    new (self) android::AudioTrack(
            streamType,
            sampleRate,
            format,
            channelMask,
            frameCount,
            flags,
            callback,
            notificationFrames,
            sessionId,
            transferType,
            offloadInfo,
            attributionSource,
            attributes,
            doNotReconnect,
            maxRequiredSpeed,
            selectedDeviceId,
            std::string{});
}
