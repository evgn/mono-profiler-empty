# mono-profiler-empty

**Using mono profiler in Windows:**

1. Compile **init.cpp** and create **mono-profiler-empty.dll** library.
2. Specify **mono-profiler-empty.dll** file path in the **PATH** env var.  
   **or**  
   Place **mono-profiler-empty.dll** into the mono installation directory.

3. Run mono with the following command line: `--profile=empty`.  
   **or**  
   Provide command line mentioned above in the **MONO_ENV_OPTIONS** env var.

Example: `mono --profile=empty some_path\my_app.exe`
