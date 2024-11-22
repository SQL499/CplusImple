cmake_minimum_required(VERSION 3.15)
project(CplusImple)

# Configuración de C++ (usa C++17)
set(CMAKE_CXX_STANDARD 17)

# Encontrar LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Incluir los directorios de LLVM
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Archivos generados por ANTLR
include_directories(salida)

# Ruta a la librería de ANTLR
include_directories(/usr/local/include/antlr4-runtime)

# Archivos fuente
set(SOURCES
    salida/CplusImpleLexer.cpp
    salida/CplusImpleParser.cpp
    salida/CplusImpleBaseListener.cpp  # Si usas listeners en lugar de visitors
    IRGenerator.cpp                    # Nuevo generador de IR
    main.cpp                           # Driver principal
)

# Crear el ejecutable
add_executable(compilador ${SOURCES})

# Incluir el runtime de ANTLR4
target_link_libraries(compilador /usr/local/lib/libantlr4-runtime.a)

# Linkear las librerías de LLVM
llvm_map_components_to_libnames(LLVM_LIBS core orcjit native)
target_link_libraries(compilador ${LLVM_LIBS})
