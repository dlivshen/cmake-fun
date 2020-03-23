cmake_minimum_required(VERSION 3.14)

project(MyProject)

include(cmake/conan.cmake)

conan_cmake_run(CONANFILE conanfile.txt
	BASIC_SETUP TARGETS
		BUILD missing)

add_executable(${CMAKE_PROJECT_NAME}
	main.cpp
	)

target_compile_definitions(${CMAKE_PROJECT_NAME}
	PUBLIC
	$<$<CONFIG:Debug>:
		_DEBUG
	>
	)

target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})
