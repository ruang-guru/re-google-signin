## How to use this template

# `re-google-signin`

[![Build Status](https://github.com/ruang-guru/re-google-signin/workflows/Build/badge.svg)](https://github.com/ruang-guru/re-google-signin/actions)
[![Version](https://img.shields.io/npm/v/ruang-guru/re-google-signin.svg)](https://www.npmjs.com/@ruangguru/re-google-signin)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/google-signin`](https://github.com/react-native-community/google-signin).

Exposed as `GoogleSignin` module.

`@ruang-guru/re-google-signin` X.y._ means it's compatible with
`@react-native-community/google-signin` X.y._

## Installation

When
[`@react-native-community/something`](https://github.com/react-native-community/something)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @ruangguru/re-google-signin
# or
yarn add @ruangguru/re-google-signin
```

`ruang-guru/re-google-signin` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "re-google-signin"
  ],
  //...
}
```

## Usage

### Types

#### `GoogleSignin.t`

...

### Methods

#### `GoogleSignin.method`

...

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---
