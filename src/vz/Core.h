#ifndef INC_2DG_CORE_H
#define INC_2DG_CORE_H

#if defined VZ_DEBUG
#   define VZ_LOG_INFO(x)      std::cout << "[INFO]    -- " << x << std::endl
#   define VZ_LOG_FAIL(x)      std::cout << "[FAIL]    -- " << x << std::endl
#   define VZ_LOG_SUCCESS(x)   std::cout << "[SUCCESS] -- " << x << std::endl
#elif defined VZ_RELEASE
#   define VZ_LOG_INFO(x)
#   define VZ_LOG_FAIL(x)
#   define VZ_LOG_SUCCESS(x)
#endif

#if defined VZ_ASSERT_ENABLED || defined VZ_DEBUG
#   define VZ_ASSERT(con, fstr)     if(!con) VZ_LOG_FAIL(fstr); assert(con)
#else
#   define VZ_ASSERT(con, fstr)     con
#endif
#endif //INC_2DG_CORE_H
