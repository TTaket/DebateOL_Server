#include "ChangeStr_Base64_user.h"
#include "../../cmd/user/userservice/User.h"
#include "../../cmd/user/userservice/user_types.h"
#include "../Openssl/openssl.h"

// user
User_GetBaseInfo_SendInfo ChangeStr_decodebase64( User_GetBaseInfo_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_usernum = Base64Decode( x.Aim_usernum );
    x.info        = Base64Decode( x.info );
    return x;
}

User_GetBaseInfo_RecvInfo ChangeStr_decodebase64( User_GetBaseInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_GetSocialInfo_SendInfo ChangeStr_decodebase64( User_GetSocialInfo_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_usernum = Base64Decode( x.Aim_usernum );
    x.info        = Base64Decode( x.info );
    return x;
}

User_GetSocialInfo_RecvInfo ChangeStr_decodebase64( User_GetSocialInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_GetExInfo_SendInfo ChangeStr_decodebase64( User_GetExInfo_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_usernum = Base64Decode( x.Aim_usernum );
    x.info        = Base64Decode( x.info );
    return x;
}

User_GetExInfo_RecvInfo ChangeStr_decodebase64( User_GetExInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_reg_SendInfo ChangeStr_decodebase64( User_reg_SendInfo& x ) {
    x.tel     = Base64Decode( x.tel );
    x.usernum = Base64Decode( x.usernum );
    x.passwd  = Base64Decode( x.passwd );
    return x;
}

User_reg_RecvInfo ChangeStr_decodebase64( User_reg_RecvInfo& x ) {
    return x;
}

User_login_Tel_SendInfo ChangeStr_decodebase64( User_login_Tel_SendInfo& x ) {
    x.tel    = Base64Decode( x.tel );
    x.passwd = Base64Decode( x.passwd );
    return x;
}

User_login_num_SendInfo ChangeStr_decodebase64( User_login_num_SendInfo& x ) {
    x.usernum = Base64Decode( x.usernum );
    x.passwd  = Base64Decode( x.passwd );
    return x;
}

User_login_RecvInfo ChangeStr_decodebase64( User_login_RecvInfo& x ) {
    x.jwt_token         = Base64Decode( x.jwt_token );
    x.refresh_jwt_token = Base64Decode( x.refresh_jwt_token );
    return x;
}

User_logoff_SendInfo ChangeStr_decodebase64( User_logoff_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

User_logoff_RecvInfo ChangeStr_decodebase64( User_logoff_RecvInfo& x ) {
    return x;
}

User_refresh_jwt1_SendInfo ChangeStr_decodebase64( User_refresh_jwt1_SendInfo& x ) {
    x.jwt_token         = Base64Decode( x.jwt_token );
    x.refresh_jwt_token = Base64Decode( x.refresh_jwt_token );
    return x;
}

User_refresh_jwt1_RecvInfo ChangeStr_decodebase64( User_refresh_jwt1_RecvInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

User_refresh_jwt2_SendInfo ChangeStr_decodebase64( User_refresh_jwt2_SendInfo& x ) {
    x.jwt_token         = Base64Decode( x.jwt_token );
    x.refresh_jwt_token = Base64Decode( x.refresh_jwt_token );
    return x;
}

User_refresh_jwt2_RecvInfo ChangeStr_decodebase64( User_refresh_jwt2_RecvInfo& x ) {
    x.jwt_token         = Base64Decode( x.jwt_token );
    x.refresh_jwt_token = Base64Decode( x.refresh_jwt_token );
    return x;
}

User_friend_SendInfo ChangeStr_decodebase64( User_friend_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

User_friend_RecvInfo ChangeStr_decodebase64( User_friend_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_follow_SendInfo ChangeStr_decodebase64( User_follow_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

User_follow_RecvInfo ChangeStr_decodebase64( User_follow_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_followed_SendInfo ChangeStr_decodebase64( User_followed_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

User_followed_RecvInfo ChangeStr_decodebase64( User_followed_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

User_ModifyBaseInfo_SendInfo ChangeStr_decodebase64( User_ModifyBaseInfo_SendInfo& x ) {
    x.jwt_token  = Base64Decode( x.jwt_token );
    x.modifyinfo = Base64Decode( x.modifyinfo );
    return x;
}

User_ModifyBaseInfo_RecvInfo ChangeStr_decodebase64( User_ModifyBaseInfo_RecvInfo& x ) {
    return x;
}

User_ModifySocialInfo_SendInfo ChangeStr_decodebase64( User_ModifySocialInfo_SendInfo& x ) {
    x.jwt_token  = Base64Decode( x.jwt_token );
    x.modifyinfo = Base64Decode( x.modifyinfo );
    return x;
}

User_ModifySocialInfo_RecvInfo ChangeStr_decodebase64( User_ModifySocialInfo_RecvInfo& x ) {
    return x;
}

User_ModifyExInfo_SendInfo ChangeStr_decodebase64( User_ModifyExInfo_SendInfo& x ) {
    x.jwt_token  = Base64Decode( x.jwt_token );
    x.modifyinfo = Base64Decode( x.modifyinfo );
    return x;
}

User_ModifyExInfo_RecvInfo ChangeStr_decodebase64( User_ModifyExInfo_RecvInfo& x ) {
    return x;
}

User_GetBaseInfo_SendInfo ChangeStr_encodebase64( User_GetBaseInfo_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_usernum = Base64Encode( x.Aim_usernum );
    x.info        = Base64Encode( x.info );
    return x;
}

User_GetBaseInfo_RecvInfo ChangeStr_encodebase64( User_GetBaseInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_GetSocialInfo_SendInfo ChangeStr_encodebase64( User_GetSocialInfo_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_usernum = Base64Encode( x.Aim_usernum );
    x.info        = Base64Encode( x.info );
    return x;
}

User_GetSocialInfo_RecvInfo ChangeStr_encodebase64( User_GetSocialInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_GetExInfo_SendInfo ChangeStr_encodebase64( User_GetExInfo_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_usernum = Base64Encode( x.Aim_usernum );
    x.info        = Base64Encode( x.info );
    return x;
}

User_GetExInfo_RecvInfo ChangeStr_encodebase64( User_GetExInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_reg_SendInfo ChangeStr_encodebase64( User_reg_SendInfo& x ) {
    x.tel     = Base64Encode( x.tel );
    x.usernum = Base64Encode( x.usernum );
    x.passwd  = Base64Encode( x.passwd );
    return x;
}

User_reg_RecvInfo ChangeStr_encodebase64( User_reg_RecvInfo& x ) {
    return x;
}

User_login_Tel_SendInfo ChangeStr_encodebase64( User_login_Tel_SendInfo& x ) {
    x.tel    = Base64Encode( x.tel );
    x.passwd = Base64Encode( x.passwd );
    return x;
}

User_login_num_SendInfo ChangeStr_encodebase64( User_login_num_SendInfo& x ) {
    x.usernum = Base64Encode( x.usernum );
    x.passwd  = Base64Encode( x.passwd );
    return x;
}

User_login_RecvInfo ChangeStr_encodebase64( User_login_RecvInfo& x ) {
    x.jwt_token         = Base64Encode( x.jwt_token );
    x.refresh_jwt_token = Base64Encode( x.refresh_jwt_token );
    return x;
}

User_logoff_SendInfo ChangeStr_encodebase64( User_logoff_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

User_logoff_RecvInfo ChangeStr_encodebase64( User_logoff_RecvInfo& x ) {
    return x;
}

User_refresh_jwt1_SendInfo ChangeStr_encodebase64( User_refresh_jwt1_SendInfo& x ) {
    x.jwt_token         = Base64Encode( x.jwt_token );
    x.refresh_jwt_token = Base64Encode( x.refresh_jwt_token );
    return x;
}

User_refresh_jwt1_RecvInfo ChangeStr_encodebase64( User_refresh_jwt1_RecvInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

User_refresh_jwt2_SendInfo ChangeStr_encodebase64( User_refresh_jwt2_SendInfo& x ) {
    x.jwt_token         = Base64Encode( x.jwt_token );
    x.refresh_jwt_token = Base64Encode( x.refresh_jwt_token );
    return x;
}

User_refresh_jwt2_RecvInfo ChangeStr_encodebase64( User_refresh_jwt2_RecvInfo& x ) {
    x.jwt_token         = Base64Encode( x.jwt_token );
    x.refresh_jwt_token = Base64Encode( x.refresh_jwt_token );
    return x;
}

User_friend_SendInfo ChangeStr_encodebase64( User_friend_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

User_friend_RecvInfo ChangeStr_encodebase64( User_friend_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_follow_SendInfo ChangeStr_encodebase64( User_follow_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

User_follow_RecvInfo ChangeStr_encodebase64( User_follow_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_followed_SendInfo ChangeStr_encodebase64( User_followed_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

User_followed_RecvInfo ChangeStr_encodebase64( User_followed_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

User_ModifyBaseInfo_SendInfo ChangeStr_encodebase64( User_ModifyBaseInfo_SendInfo& x ) {
    x.jwt_token  = Base64Encode( x.jwt_token );
    x.modifyinfo = Base64Encode( x.modifyinfo );
    return x;
}

User_ModifyBaseInfo_RecvInfo ChangeStr_encodebase64( User_ModifyBaseInfo_RecvInfo& x ) {
    return x;
}

User_ModifySocialInfo_SendInfo ChangeStr_encodebase64( User_ModifySocialInfo_SendInfo& x ) {
    x.jwt_token  = Base64Encode( x.jwt_token );
    x.modifyinfo = Base64Encode( x.modifyinfo );
    return x;
}

User_ModifySocialInfo_RecvInfo ChangeStr_encodebase64( User_ModifySocialInfo_RecvInfo& x ) {
    return x;
}

User_ModifyExInfo_SendInfo ChangeStr_encodebase64( User_ModifyExInfo_SendInfo& x ) {
    x.jwt_token  = Base64Encode( x.jwt_token );
    x.modifyinfo = Base64Encode( x.modifyinfo );
    return x;
}

User_ModifyExInfo_RecvInfo ChangeStr_encodebase64( User_ModifyExInfo_RecvInfo& x ) {
    return x;
}
