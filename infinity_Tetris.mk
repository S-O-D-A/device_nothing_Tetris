
#
# Copyright (C) 2022 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit_only.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Lunaris stuff.
$(call inherit-product, vendor/infinity/config/common_full_phone.mk)

# Enable ADPF pipeline for UI performance
PRODUCT_PRODUCT_PROPERTIES += \
persist.vendor.power.adpf.enable=true \
ro.vendor.powerhal.adpf.enable=true

#gpu
GPU_FREQS_PATH := /sys/devices/platform/13000000.mali/devfreq/available_frequencies
GPU_MIN_FREQ_PATH := /sys/devices/platform/13000000.mali/devfreq/min_freq

# Inherit from Tetris device
$(call inherit-product, device/nothing/Tetris/device.mk)

PRODUCT_NAME := infinity_Tetris
PRODUCT_DEVICE := Tetris
PRODUCT_BRAND := Nothing
PRODUCT_MANUFACTURER := Nothing
PRODUCT_MODEL := A015

PRODUCT_GMS_CLIENTID_BASE := android-nothing

DEVICE_CODENAME := Tetris

PRODUCT_BUILD_PROP_OVERRIDES += \
    BuildDesc="Tetris 16 BP2A.250605.031.A3 2602251904 release-keys" \
    BuildFingerprint=Nothing/Tetris/Tetris:16/BP2A.250605.031.A3/2602251904:user/release-keys \
    DeviceProduct=$(DEVICE_CODENAME)

# infinity
INFINITY_MAINTAINER := Ashwani
TARGET_HAS_UDFPS := true
WITH_GAPPS := true
INFINITY_BUILD_TYPE := OFFICIAL
