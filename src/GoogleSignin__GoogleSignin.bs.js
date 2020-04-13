


function make(scopes, webClientId, hostedDomain, offlineAccess, iosClientId, loginHint, forceCodeForRefreshToken, accountName, param) {
  return {
          scopes: scopes,
          webClientId: webClientId,
          hostedDomain: hostedDomain,
          offlineAccess: offlineAccess,
          iosClientId: iosClientId,
          loginHint: loginHint,
          forceCodeForRefreshToken: forceCodeForRefreshToken,
          accountName: accountName
        };
}

var Configure = {
  make: make
};

function make$1(showPlayServicesUpdateDialog) {
  return showPlayServicesUpdateDialog;
}

var HasPlayServicesParams = {
  make: make$1
};

function user(t) {
  return t.user;
}

var User = {
  user: user
};

var Token = { };

export {
  Configure ,
  HasPlayServicesParams ,
  User ,
  Token ,
  
}
/* No side effect */
