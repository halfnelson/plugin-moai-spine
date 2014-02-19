cmake_minimum_required ( VERSION 2.8.5 )
project ( spine )

    set ( SPINE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}" )

    set ( SPINE_INCLUDES "${SPINE_SOURCE_DIR}/include")

    set ( SPINE_SOURCES 
        ${SPINE_SOURCE_DIR}/src/spine/Animation.c
        ${SPINE_SOURCE_DIR}/src/spine/AnimationState.c
        ${SPINE_SOURCE_DIR}/src/spine/AnimationStateData.c
        ${SPINE_SOURCE_DIR}/src/spine/Atlas.c
        ${SPINE_SOURCE_DIR}/src/spine/AtlasAttachmentLoader.c
        ${SPINE_SOURCE_DIR}/src/spine/Attachment.c
        ${SPINE_SOURCE_DIR}/src/spine/AttachmentLoader.c
        ${SPINE_SOURCE_DIR}/src/spine/Bone.c
        ${SPINE_SOURCE_DIR}/src/spine/BoneData.c
        ${SPINE_SOURCE_DIR}/src/spine/BoundingBoxAttachment.c
        ${SPINE_SOURCE_DIR}/src/spine/Event.c
        ${SPINE_SOURCE_DIR}/src/spine/EventData.c
        ${SPINE_SOURCE_DIR}/src/spine/extension.c
        ${SPINE_SOURCE_DIR}/src/spine/Json.c
        ${SPINE_SOURCE_DIR}/src/spine/Json.h
        ${SPINE_SOURCE_DIR}/src/spine/RegionAttachment.c
        ${SPINE_SOURCE_DIR}/src/spine/Skeleton.c
        ${SPINE_SOURCE_DIR}/src/spine/SkeletonBounds.c
        ${SPINE_SOURCE_DIR}/src/spine/SkeletonData.c
        ${SPINE_SOURCE_DIR}/src/spine/SkeletonJson.c
        ${SPINE_SOURCE_DIR}/src/spine/Skin.c
        ${SPINE_SOURCE_DIR}/src/spine/Slot.c
        ${SPINE_SOURCE_DIR}/src/spine/SlotData.c

    )

add_library(spine STATIC ${SPINE_SOURCES})
target_include_directories(spine PUBLIC ${SPINE_INCLUDES})