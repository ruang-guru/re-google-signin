module Configure = {
  type t = {
    scopes: option(list(string)),
    webClientId: option(string),
    hostedDomain: option(string),
    offlineAccess: option(bool),
    iosClientId: option(string),
    /* IOS ONLY */
    loginHint: option(string),
    /* ANDROID ONLY */
    forceCodeForRefreshToken: option(bool),
    accountName: option(string),
  };

  let make =
      (
        ~scopes=?,
        ~webClientId=?,
        ~hostedDomain=?,
        ~offlineAccess=?,
        ~iosClientId=?,
        ~loginHint=?,
        ~forceCodeForRefreshToken=?,
        ~accountName=?,
        _,
      ) => {
    scopes,
    webClientId,
    hostedDomain,
    offlineAccess,
    iosClientId,
    /* IOS ONLY */
    loginHint,
    /* ANDROID ONLY */
    forceCodeForRefreshToken,
    accountName,
  };
};

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external configure: Configure.t => unit = "configure";

module HasPlayServicesParams = {
  type t = {showPlayServicesUpdateDialog: option(bool)};

  let make = (~showPlayServicesUpdateDialog) => {
    showPlayServicesUpdateDialog;
  };
};

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external hasPlayServices: HasPlayServicesParams.t => Js.Promise.t(bool) =
  "hasPlayServices";

module User = {
  type t = {
    user,
    scopes: option(list(string)),
    idToken: Js.Null.t(string),
    serviceAuthCode: Js.Null.t(string),
  }
  and user = {
    id: string,
    name: Js.Null.t(string),
    email: string,
    photo: Js.Null.t(string),
    familyName: Js.Null.t(string),
    givenName: Js.Null.t(string),
  };

  let user = t => t.user;
};

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external signInSilently: unit => Js.Promise.t(User.t) = "signInSilently";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external signin: unit => Js.Promise.t(User.t) = "signin";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external signout: unit => Js.Promise.t(unit) = "signout";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external revokeAccess: unit => Js.Promise.t(unit) = "revokeAccess";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external isSignin: unit => Js.Promise.t(bool) = "isSignin";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external getCurrentUser: unit => Js.Promise.t(Js.Null.t(User.t)) =
  "getCurrentUser";

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external clearCachedAccessToken: unit => Js.Promise.t(unit) =
  "clearCachedAccessToken";

module Token = {
  type t = {
    idToken: string,
    accessToken: string,
  };
};

[@bs.module "@react-native-community/google-signin"] [@bs.scope "GoogleSignin"]
external getTokens: unit => Js.Promise.t(Token.t) = "getTokens";
