# CLIPS Rule-based Production System

This package contains the C Language Integrated Production System (CLIPS). It
is a language and inference engine to create expert systems or other efficient
rule-based decision and inference flows using forward chaining reasoning.

It has originally been developed at NASA since 1985 and is available as
public domain software since 1996.

## Modifications over Original Source

We have made the following modifications to CLIPS since import:

- reformatting
- add `MODULE.bazel` and `BUILD` for use with Bazel
- custom header that declares C linkage and includes the original `clips.h`
- small patch to properly support printing and re-interpreting external
  addresses
- fix premature garbage collection of fact data
- fix uninitialized struct on stack in CLIPS

### Original Source and Documentation

This package is based on CLIPS version `6.31`. The original source can be
downloaded from
[SourceForge](https://sourceforge.net/projects/clipsrules/files/CLIPS/6.31/clips_core_source_631.tar.gz/download).

The documentation for CLIPS is available from the
[official website](https://www.clipsrules.net/).
