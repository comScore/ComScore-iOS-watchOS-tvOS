#!/bin/sh

# To automatically run this script add a "Run Script" Phase to xcode with the following:
#    bash "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/ComScore.framework/strip-framework.sh"

if [ "$ACTION" = "install" ]; then

    COMSCORE_FRAMEWORK="ComScore"

    cd "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/$COMSCORE_FRAMEWORK.framework"

    CURRENT_ARCHS="$(lipo -info ${COMSCORE_FRAMEWORK} | rev | cut -d ':' -f1 | rev)"

    STRIPPED=0
    for ARCH in $CURRENT_ARCHS; do
        if ! [[ "${VALID_ARCHS}" == *"$ARCH"* ]]; then
            echo "Stripping ${COMSCORE_FRAMEWORK}.framework of architecture: ${ARCH}"
            lipo -remove "$ARCH" -output "$COMSCORE_FRAMEWORK" "$COMSCORE_FRAMEWORK" || exit 1
            STRIPPED=1
        fi
    done

    # if [ STRIPPED ] && [ "${CODE_SIGNING_REQUIRED}" == "YES" ]; then
    #    echo "Codesigning ${COMSCORE_FRAMEWORK}.framework"
    #    /usr/bin/codesign --force --sign ${EXPANDED_CODE_SIGN_IDENTITY} --preserve-metadata=identifier,entitlements "$COMSCORE_FRAMEWORK"
    # fi

    SCRIPT_NAME="${0##*/}"
    if [ -f $SCRIPT_NAME ]; then
        rm -rf "${SCRIPT_NAME}"
    fi

fi


