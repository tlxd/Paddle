if(NOT WIN32 AND TENSORRT_FOUND)
  file(
    GLOB TEST_OPS
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "test_*.py")
  string(REPLACE ".py" "" TEST_OPS "${TEST_OPS}")

  foreach(TEST_OP ${TEST_OPS})
    py_test_modules(${TEST_OP} MODULES ${TEST_OP})
  endforeach()
  set_tests_properties(test_converter_model_bert PROPERTIES TIMEOUT "500")
  set_tests_properties(test_converter_model_dummy PROPERTIES TIMEOUT "500")
  set_tests_properties(test_converter_model_resnet50 PROPERTIES TIMEOUT "500")
  set_tests_properties(test_converter_conv PROPERTIES TIMEOUT "100")
  set_tests_properties(test_export PROPERTIES TIMEOUT "500")
  set_tests_properties(test_converter_norm PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_ops PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_stat PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_math PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_activation PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_others PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_manipulation PROPERTIES TIMEOUT "100")
  set_tests_properties(test_converter_creation PROPERTIES TIMEOUT "100")
endif()
