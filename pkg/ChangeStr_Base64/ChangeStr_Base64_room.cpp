#include "ChangeStr_Base64_room.h"
#include "../../cmd/room/roomservice/Room.h"
#include "../../cmd/room/roomservice/room_types.h"
#include "../Openssl/openssl.h"

Room_GetBaseInfo_SendInfo ChangeStr_decodebase64( Room_GetBaseInfo_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_Roomnum = Base64Decode( x.Aim_Roomnum );
    x.info        = Base64Decode( x.info );
    return x;
}

Room_GetBaseInfo_RecvInfo ChangeStr_decodebase64( Room_GetBaseInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_GetExInfo_SendInfo ChangeStr_decodebase64( Room_GetExInfo_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_Roomnum = Base64Decode( x.Aim_Roomnum );
    x.info        = Base64Decode( x.info );
    return x;
}

Room_GetExInfo_RecvInfo ChangeStr_decodebase64( Room_GetExInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_GetURrelation_SendInfo ChangeStr_decodebase64( Room_GetURrelation_SendInfo& x ) {
    x.jwt_token   = Base64Decode( x.jwt_token );
    x.Aim_Roomnum = Base64Decode( x.Aim_Roomnum );
    x.info        = Base64Decode( x.info );
    return x;
}

Room_GetURrelation_RecvInfo ChangeStr_decodebase64( Room_GetURrelation_RecvInfo& x ) {
    x.info_UR_pos = Base64Decode( x.info_UR_pos );
    x.info_UR_per = Base64Decode( x.info_UR_per );
    return x;
}

Room_Create_SendInfo ChangeStr_decodebase64( Room_Create_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    x.Roomnum   = Base64Decode( x.Roomnum );
    x.Roomname  = Base64Decode( x.Roomname );
    x.passwd    = Base64Decode( x.passwd );
    return x;
}

Room_Create_RecvInfo ChangeStr_decodebase64( Room_Create_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_Joinroom_SendInfo ChangeStr_decodebase64( Room_Joinroom_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    x.roomnum   = Base64Decode( x.roomnum );
    x.passwd    = Base64Decode( x.passwd );
    return x;
}

Room_Joinroom_RecvInfo ChangeStr_decodebase64( Room_Joinroom_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_Exitroom_SendInfo ChangeStr_decodebase64( Room_Exitroom_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    x.roomnum   = Base64Decode( x.roomnum );
    return x;
}

Room_Exitroom_RecvInfo ChangeStr_decodebase64( Room_Exitroom_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_ChangePasswd_SendInfo ChangeStr_decodebase64( Room_ChangePasswd_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    x.roomnum   = Base64Decode( x.roomnum );
    x.Opasswd   = Base64Decode( x.Opasswd );
    x.Npasswd   = Base64Decode( x.Npasswd );
    return x;
}

Room_ChangePasswd_RecvInfo ChangeStr_decodebase64( Room_ChangePasswd_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_ChangeExtraInfo_SendInfo ChangeStr_decodebase64( Room_ChangeExtraInfo_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    x.roomnum   = Base64Decode( x.roomnum );
    x.info      = Base64Decode( x.info );
    return x;
}

Room_ChangeExtraInfo_RecvInfo ChangeStr_decodebase64( Room_ChangeExtraInfo_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_ChangeDebatePos_SendInfo ChangeStr_decodebase64( Room_ChangeDebatePos_SendInfo& x ) {
    x.jwt_token = Base64Decode( x.jwt_token );
    return x;
}

Room_ChangeDebatePos_RecvInfo ChangeStr_decodebase64( Room_ChangeDebatePos_RecvInfo& x ) {
    x.info = Base64Decode( x.info );
    return x;
}

Room_GetBaseInfo_SendInfo ChangeStr_encodebase64( Room_GetBaseInfo_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_Roomnum = Base64Encode( x.Aim_Roomnum );
    x.info        = Base64Encode( x.info );
    return x;
}

Room_GetBaseInfo_RecvInfo ChangeStr_encodebase64( Room_GetBaseInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_GetExInfo_SendInfo ChangeStr_encodebase64( Room_GetExInfo_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_Roomnum = Base64Encode( x.Aim_Roomnum );
    x.info        = Base64Encode( x.info );
    return x;
}

Room_GetExInfo_RecvInfo ChangeStr_encodebase64( Room_GetExInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_GetURrelation_SendInfo ChangeStr_encodebase64( Room_GetURrelation_SendInfo& x ) {
    x.jwt_token   = Base64Encode( x.jwt_token );
    x.Aim_Roomnum = Base64Encode( x.Aim_Roomnum );
    x.info        = Base64Encode( x.info );
    return x;
}

Room_GetURrelation_RecvInfo ChangeStr_encodebase64( Room_GetURrelation_RecvInfo& x ) {
    x.info_UR_pos = Base64Encode( x.info_UR_pos );
    x.info_UR_per = Base64Encode( x.info_UR_per );
    return x;
}

Room_Create_SendInfo ChangeStr_encodebase64( Room_Create_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    x.Roomnum   = Base64Encode( x.Roomnum );
    x.Roomname  = Base64Encode( x.Roomname );
    x.passwd    = Base64Encode( x.passwd );
    return x;
}

Room_Create_RecvInfo ChangeStr_encodebase64( Room_Create_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_Joinroom_SendInfo ChangeStr_encodebase64( Room_Joinroom_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    x.roomnum   = Base64Encode( x.roomnum );
    x.passwd    = Base64Encode( x.passwd );
    return x;
}

Room_Joinroom_RecvInfo ChangeStr_encodebase64( Room_Joinroom_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_Exitroom_SendInfo ChangeStr_encodebase64( Room_Exitroom_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    x.roomnum   = Base64Encode( x.roomnum );
    return x;
}

Room_Exitroom_RecvInfo ChangeStr_encodebase64( Room_Exitroom_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_ChangePasswd_SendInfo ChangeStr_encodebase64( Room_ChangePasswd_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    x.roomnum   = Base64Encode( x.roomnum );
    x.Opasswd   = Base64Encode( x.Opasswd );
    x.Npasswd   = Base64Encode( x.Npasswd );
    return x;
}

Room_ChangePasswd_RecvInfo ChangeStr_encodebase64( Room_ChangePasswd_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_ChangeExtraInfo_SendInfo ChangeStr_encodebase64( Room_ChangeExtraInfo_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    x.roomnum   = Base64Encode( x.roomnum );
    x.info      = Base64Encode( x.info );
    return x;
}

Room_ChangeExtraInfo_RecvInfo ChangeStr_encodebase64( Room_ChangeExtraInfo_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}

Room_ChangeDebatePos_SendInfo ChangeStr_encodebase64( Room_ChangeDebatePos_SendInfo& x ) {
    x.jwt_token = Base64Encode( x.jwt_token );
    return x;
}

Room_ChangeDebatePos_RecvInfo ChangeStr_encodebase64( Room_ChangeDebatePos_RecvInfo& x ) {
    x.info = Base64Encode( x.info );
    return x;
}
