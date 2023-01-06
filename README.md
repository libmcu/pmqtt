## Integration Guide

### Include in your project

```bash
$ cd ${YOUR_PROJECT_DIR}
$ git submodule add https://github.com/libmcu/pmqtt.git pmqtt
```

### Add in your build system

Supported target platforms are:

- coreMQTT

```cmake
set(TARGET_PLATFORM coremqtt)
add_subdirectory(pmqtt)
```
