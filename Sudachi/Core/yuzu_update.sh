download_sudachi() {
    git clone https://github.com/sudachi-emu/sudachi sudachi-src
}

setup_core_dirs() {
    mkdir -p Sudachi/audio_core
    mkdir Sudachi/common
    mkdir Sudachi/core
    mkdir Sudachi/frontend_common
    mkdir Sudachi/hid_core
    mkdir Sudachi/input_common
    mkdir Sudachi/network
    mkdir Sudachi/shader_recompiler
    mkdir Sudachi/video_core
    mkdir Sudachi/web_service
    
    mkdir -p Sudachi/include/audio_core
    mkdir Sudachi/include/common
    mkdir Sudachi/include/core
    mkdir Sudachi/include/frontend_common
    mkdir Sudachi/include/hid_core
    mkdir Sudachi/include/input_common
    mkdir Sudachi/include/network
    mkdir Sudachi/include/shader_recompiler
    mkdir Sudachi/include/video_core
    mkdir Sudachi/include/web_service
}

move_headers_to_include_dir() {
    cp -r sudachi-src/src/audio_core Sudachi/include
    cp -r sudachi-src/src/common Sudachi/include
    cp -r sudachi-src/src/core Sudachi/include
    cp -r sudachi-src/src/frontend_common Sudachi/include
    cp -r sudachi-src/src/hid_core Sudachi/include
    cp -r sudachi-src/src/input_common Sudachi/include
    cp -r sudachi-src/src/network Sudachi/include
    cp -r sudachi-src/src/shader_recompiler Sudachi/include
    cp -r sudachi-src/src/video_core Sudachi/include
    cp -r sudachi-src/src/web_service Sudachi/include
}

cleanse_include_dirs() {
    find Sudachi/include -not -name "*.h" -not -name "*.hpp" -not -name "*.inc" -type f -delete
}

move_source_files_to_sudachi_dir() {
    cp -r sudachi-src/src/audio_core Sudachi
    cp -r sudachi-src/src/common Sudachi
    cp -r sudachi-src/src/core Sudachi
    cp -r sudachi-src/src/frontend_common Sudachi
    cp -r sudachi-src/src/hid_core Sudachi
    cp -r sudachi-src/src/input_common Sudachi
    cp -r sudachi-src/src/network Sudachi
    cp -r sudachi-src/src/shader_recompiler Sudachi
    cp -r sudachi-src/src/video_core Sudachi
    cp -r sudachi-src/src/web_service Sudachi
}

cleanse_source_dirs() {
    find Sudachi -not -name "*.c" -not -name "*.cpp" -type f -delete
}

move_files_to_fix_issues() {
    mkdir sudachi-src/src/video_core/host_shaders/externals
    cp -r sudachi-src/externals/FidelityFX-FSR sudachi-src/src/video_core/host_shaders/externals

    mkdir host_shaders
    cd host_shaders
    cmake ../sudachi-src/src/video_core/host_shaders
    make host_shaders
    cd ..
    cp -r host_shaders/include/video_core/host_shaders/* Sudachi/include/video_core/host_shaders
}

remove_files_not_for_ios() {
    rm -rf Sudachi/audio_core/sink/cubeb* Sudachi/audio_core/sink/oboe*
    rm -rf Sudachi/common/android Sudachi/common/fs/fs_android.cpp Sudachi/common/linux Sudachi/common/windows Sudachi/common/x64
    rm -rf Sudachi/core/arm/nce
    rm Sudachi/core/hle/service/ssl/ssl_backend_none.cpp Sudachi/core/hle/service/ssl/ssl_backend_schannel.cpp Sudachi/core/hle/service/ssl/ssl_backend_securetransport.cpp
    rm Sudachi/input_common/drivers/gcadapter.cpp
    rm Sudachi/video_core/macro/macro_jit_x64.cpp
    rm -rf Sudachi/video_core/renderer_opengl
    
    rm -rf Sudachi/include/audio_core/sink/cubeb* Sudachi/include/audio_core/sink/oboe*
    rm -rf Sudachi/include/common/android Sudachi/include/common/fs/fs_android.h Sudachi/include/common/linux Sudachi/include/common/windows Sudachi/include/common/x64
    rm -rf Sudachi/include/core/arm/nce
    rm Sudachi/include/input_common/drivers/gcadapter.h
    rm Sudachi/include/video_core/macro/macro_jit_x64.h
    rm -rf Sudachi/include/video_core/renderer_opengl
}

setup_core_dirs
download_sudachi
move_source_files_to_sudachi_dir
cleanse_source_dirs
move_headers_to_include_dir
cleanse_include_dirs
remove_files_not_for_ios
move_files_to_fix_issues

rm -rf host_shaders sudachi-src
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
