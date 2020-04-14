module Size = {
  type t;
  [@bs.module "@react-native-community/google-signin"]
  [@bs.scope ("GoogleSigninButton", "Size")]
  [@bs.val]
  external standard: t = "Standard";

  [@bs.module "@react-native-community/google-signin"]
  [@bs.scope ("GoogleSigninButton", "Size")]
  [@bs.val]
  external wide: t = "Wide";

  [@bs.module "@react-native-community/google-signin"]
  [@bs.scope ("GoogleSigninButton", "Size")]
  [@bs.val]
  external icon: t = "Icon";
};

module Color = {
  type t;
  [@bs.module "@react-native-community/google-signin"]
  [@bs.scope ("GoogleSigninButton", "Color")]
  [@bs.val]
  external dark: t = "Dark";

  [@bs.module "@react-native-community/google-signin"]
  [@bs.scope ("GoogleSigninButton", "Color")]
  [@bs.val]
  external light: t = "Light";
};

[@bs.module "@react-native-community/google-signin"] [@react.component]
external make:
  (
    ~style: ReactNative.Style.t=?,
    ~size: Size.t=?,
    ~color: Color.t=?,
    ~onPress: _ => unit=?,
    ~disabled: bool=?
  ) =>
  React.element =
  "GoogleSigninButton";
