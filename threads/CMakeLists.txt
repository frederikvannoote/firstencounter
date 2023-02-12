set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(threads
    main.cpp
    database.h database.cpp
    handler.h handler.cpp)

target_link_libraries(threads PRIVATE Threads::Threads)
