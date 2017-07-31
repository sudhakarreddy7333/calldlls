{ 
  "targets": [
    {
      "include_dirs" : [
        "<!(node -e \"require('nan')\")" 
      ],
      "target_name": "addon",
      "sources": [ "nanInterface.cpp"],
      "libraries": ["-lD:/C++ programs/CreateDLL/x64/Debug/CreateDLL.lib"],
      "cflags!": [ "-fno-exceptions" ],
      "cflags": [ "-std=c++11" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}