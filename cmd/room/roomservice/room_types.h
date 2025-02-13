/**
 * Autogenerated by Thrift Compiler (0.19.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef room_TYPES_H
#define room_TYPES_H

#include <iosfwd>

#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/Thrift.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>

class Room_GetBaseInfo_SendInfo;

class Room_GetBaseInfo_RecvInfo;

class Room_GetExInfo_SendInfo;

class Room_GetExInfo_RecvInfo;

class Room_GetURrelation_SendInfo;

class Room_GetURrelation_RecvInfo;

class Room_Create_SendInfo;

class Room_Create_RecvInfo;

class Room_Joinroom_SendInfo;

class Room_Joinroom_RecvInfo;

class Room_Exitroom_SendInfo;

class Room_Exitroom_RecvInfo;

class Room_ChangePasswd_SendInfo;

class Room_ChangePasswd_RecvInfo;

class Room_ChangeExtraInfo_SendInfo;

class Room_ChangeExtraInfo_RecvInfo;

class Room_ChangeDebatePos_SendInfo;

class Room_ChangeDebatePos_RecvInfo;

typedef struct _Room_GetBaseInfo_SendInfo__isset {
    _Room_GetBaseInfo_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), Aim_Roomnum( false ), info( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool Aim_Roomnum : 1;
    bool info : 1;
} _Room_GetBaseInfo_SendInfo__isset;

class Room_GetBaseInfo_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetBaseInfo_SendInfo( const Room_GetBaseInfo_SendInfo& );
    Room_GetBaseInfo_SendInfo& operator=( const Room_GetBaseInfo_SendInfo& );
    Room_GetBaseInfo_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), Aim_Roomnum(), info() {}

    virtual ~Room_GetBaseInfo_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string Aim_Roomnum;
    std::string info;

    _Room_GetBaseInfo_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_Aim_Roomnum( const std::string& val );

    void __set_info( const std::string& val );

    bool operator==( const Room_GetBaseInfo_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( Aim_Roomnum == rhs.Aim_Roomnum ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetBaseInfo_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetBaseInfo_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetBaseInfo_SendInfo& a, Room_GetBaseInfo_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetBaseInfo_SendInfo& obj );

typedef struct _Room_GetBaseInfo_RecvInfo__isset {
    _Room_GetBaseInfo_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_GetBaseInfo_RecvInfo__isset;

class Room_GetBaseInfo_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetBaseInfo_RecvInfo( const Room_GetBaseInfo_RecvInfo& );
    Room_GetBaseInfo_RecvInfo& operator=( const Room_GetBaseInfo_RecvInfo& );
    Room_GetBaseInfo_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_GetBaseInfo_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_GetBaseInfo_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_GetBaseInfo_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetBaseInfo_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetBaseInfo_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetBaseInfo_RecvInfo& a, Room_GetBaseInfo_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetBaseInfo_RecvInfo& obj );

typedef struct _Room_GetExInfo_SendInfo__isset {
    _Room_GetExInfo_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), Aim_Roomnum( false ), info( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool Aim_Roomnum : 1;
    bool info : 1;
} _Room_GetExInfo_SendInfo__isset;

class Room_GetExInfo_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetExInfo_SendInfo( const Room_GetExInfo_SendInfo& );
    Room_GetExInfo_SendInfo& operator=( const Room_GetExInfo_SendInfo& );
    Room_GetExInfo_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), Aim_Roomnum(), info() {}

    virtual ~Room_GetExInfo_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string Aim_Roomnum;
    std::string info;

    _Room_GetExInfo_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_Aim_Roomnum( const std::string& val );

    void __set_info( const std::string& val );

    bool operator==( const Room_GetExInfo_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( Aim_Roomnum == rhs.Aim_Roomnum ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetExInfo_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetExInfo_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetExInfo_SendInfo& a, Room_GetExInfo_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetExInfo_SendInfo& obj );

typedef struct _Room_GetExInfo_RecvInfo__isset {
    _Room_GetExInfo_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_GetExInfo_RecvInfo__isset;

class Room_GetExInfo_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetExInfo_RecvInfo( const Room_GetExInfo_RecvInfo& );
    Room_GetExInfo_RecvInfo& operator=( const Room_GetExInfo_RecvInfo& );
    Room_GetExInfo_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_GetExInfo_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_GetExInfo_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_GetExInfo_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetExInfo_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetExInfo_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetExInfo_RecvInfo& a, Room_GetExInfo_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetExInfo_RecvInfo& obj );

typedef struct _Room_GetURrelation_SendInfo__isset {
    _Room_GetURrelation_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), Aim_Roomnum( false ), info( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool Aim_Roomnum : 1;
    bool info : 1;
} _Room_GetURrelation_SendInfo__isset;

class Room_GetURrelation_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetURrelation_SendInfo( const Room_GetURrelation_SendInfo& );
    Room_GetURrelation_SendInfo& operator=( const Room_GetURrelation_SendInfo& );
    Room_GetURrelation_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), Aim_Roomnum(), info() {}

    virtual ~Room_GetURrelation_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string Aim_Roomnum;
    std::string info;

    _Room_GetURrelation_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_Aim_Roomnum( const std::string& val );

    void __set_info( const std::string& val );

    bool operator==( const Room_GetURrelation_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( Aim_Roomnum == rhs.Aim_Roomnum ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetURrelation_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetURrelation_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetURrelation_SendInfo& a, Room_GetURrelation_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetURrelation_SendInfo& obj );

typedef struct _Room_GetURrelation_RecvInfo__isset {
    _Room_GetURrelation_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info_UR_pos( false ), info_UR_per( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info_UR_pos : 1;
    bool info_UR_per : 1;
} _Room_GetURrelation_RecvInfo__isset;

class Room_GetURrelation_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_GetURrelation_RecvInfo( const Room_GetURrelation_RecvInfo& );
    Room_GetURrelation_RecvInfo& operator=( const Room_GetURrelation_RecvInfo& );
    Room_GetURrelation_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info_UR_pos(), info_UR_per() {}

    virtual ~Room_GetURrelation_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info_UR_pos;
    std::string info_UR_per;

    _Room_GetURrelation_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info_UR_pos( const std::string& val );

    void __set_info_UR_per( const std::string& val );

    bool operator==( const Room_GetURrelation_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info_UR_pos == rhs.info_UR_pos ) )
            return false;
        if ( !( info_UR_per == rhs.info_UR_per ) )
            return false;
        return true;
    }
    bool operator!=( const Room_GetURrelation_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_GetURrelation_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_GetURrelation_RecvInfo& a, Room_GetURrelation_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_GetURrelation_RecvInfo& obj );

typedef struct _Room_Create_SendInfo__isset {
    _Room_Create_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), Roomnum( false ), Islocking( false ), Roomname( false ), passwd( false ), Debate_pos( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool Roomnum : 1;
    bool Islocking : 1;
    bool Roomname : 1;
    bool passwd : 1;
    bool Debate_pos : 1;
} _Room_Create_SendInfo__isset;

class Room_Create_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Create_SendInfo( const Room_Create_SendInfo& );
    Room_Create_SendInfo& operator=( const Room_Create_SendInfo& );
    Room_Create_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), Roomnum(), Islocking( 0 ), Roomname(), passwd(), Debate_pos( 0 ) {}

    virtual ~Room_Create_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string Roomnum;
    int32_t     Islocking;
    std::string Roomname;
    std::string passwd;
    int32_t     Debate_pos;

    _Room_Create_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_Roomnum( const std::string& val );

    void __set_Islocking( const int32_t val );

    void __set_Roomname( const std::string& val );

    void __set_passwd( const std::string& val );

    void __set_Debate_pos( const int32_t val );

    bool operator==( const Room_Create_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( Roomnum == rhs.Roomnum ) )
            return false;
        if ( !( Islocking == rhs.Islocking ) )
            return false;
        if ( !( Roomname == rhs.Roomname ) )
            return false;
        if ( !( passwd == rhs.passwd ) )
            return false;
        if ( !( Debate_pos == rhs.Debate_pos ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Create_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Create_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Create_SendInfo& a, Room_Create_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Create_SendInfo& obj );

typedef struct _Room_Create_RecvInfo__isset {
    _Room_Create_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_Create_RecvInfo__isset;

class Room_Create_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Create_RecvInfo( const Room_Create_RecvInfo& );
    Room_Create_RecvInfo& operator=( const Room_Create_RecvInfo& );
    Room_Create_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_Create_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_Create_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_Create_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Create_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Create_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Create_RecvInfo& a, Room_Create_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Create_RecvInfo& obj );

typedef struct _Room_Joinroom_SendInfo__isset {
    _Room_Joinroom_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), roomnum( false ), Debate_pos( false ), passwd( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool roomnum : 1;
    bool Debate_pos : 1;
    bool passwd : 1;
} _Room_Joinroom_SendInfo__isset;

class Room_Joinroom_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Joinroom_SendInfo( const Room_Joinroom_SendInfo& );
    Room_Joinroom_SendInfo& operator=( const Room_Joinroom_SendInfo& );
    Room_Joinroom_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), roomnum(), Debate_pos( 0 ), passwd() {}

    virtual ~Room_Joinroom_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string roomnum;
    int32_t     Debate_pos;
    std::string passwd;

    _Room_Joinroom_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_roomnum( const std::string& val );

    void __set_Debate_pos( const int32_t val );

    void __set_passwd( const std::string& val );

    bool operator==( const Room_Joinroom_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( roomnum == rhs.roomnum ) )
            return false;
        if ( !( Debate_pos == rhs.Debate_pos ) )
            return false;
        if ( !( passwd == rhs.passwd ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Joinroom_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Joinroom_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Joinroom_SendInfo& a, Room_Joinroom_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Joinroom_SendInfo& obj );

typedef struct _Room_Joinroom_RecvInfo__isset {
    _Room_Joinroom_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_Joinroom_RecvInfo__isset;

class Room_Joinroom_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Joinroom_RecvInfo( const Room_Joinroom_RecvInfo& );
    Room_Joinroom_RecvInfo& operator=( const Room_Joinroom_RecvInfo& );
    Room_Joinroom_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_Joinroom_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_Joinroom_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_Joinroom_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Joinroom_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Joinroom_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Joinroom_RecvInfo& a, Room_Joinroom_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Joinroom_RecvInfo& obj );

typedef struct _Room_Exitroom_SendInfo__isset {
    _Room_Exitroom_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), roomnum( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool roomnum : 1;
} _Room_Exitroom_SendInfo__isset;

class Room_Exitroom_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Exitroom_SendInfo( const Room_Exitroom_SendInfo& );
    Room_Exitroom_SendInfo& operator=( const Room_Exitroom_SendInfo& );
    Room_Exitroom_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), roomnum() {}

    virtual ~Room_Exitroom_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string roomnum;

    _Room_Exitroom_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_roomnum( const std::string& val );

    bool operator==( const Room_Exitroom_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( roomnum == rhs.roomnum ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Exitroom_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Exitroom_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Exitroom_SendInfo& a, Room_Exitroom_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Exitroom_SendInfo& obj );

typedef struct _Room_Exitroom_RecvInfo__isset {
    _Room_Exitroom_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_Exitroom_RecvInfo__isset;

class Room_Exitroom_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_Exitroom_RecvInfo( const Room_Exitroom_RecvInfo& );
    Room_Exitroom_RecvInfo& operator=( const Room_Exitroom_RecvInfo& );
    Room_Exitroom_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_Exitroom_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_Exitroom_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_Exitroom_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_Exitroom_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_Exitroom_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_Exitroom_RecvInfo& a, Room_Exitroom_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_Exitroom_RecvInfo& obj );

typedef struct _Room_ChangePasswd_SendInfo__isset {
    _Room_ChangePasswd_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), roomnum( false ), Opasswd( false ), Npasswd( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool roomnum : 1;
    bool Opasswd : 1;
    bool Npasswd : 1;
} _Room_ChangePasswd_SendInfo__isset;

class Room_ChangePasswd_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangePasswd_SendInfo( const Room_ChangePasswd_SendInfo& );
    Room_ChangePasswd_SendInfo& operator=( const Room_ChangePasswd_SendInfo& );
    Room_ChangePasswd_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), roomnum(), Opasswd(), Npasswd() {}

    virtual ~Room_ChangePasswd_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string roomnum;
    std::string Opasswd;
    std::string Npasswd;

    _Room_ChangePasswd_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_roomnum( const std::string& val );

    void __set_Opasswd( const std::string& val );

    void __set_Npasswd( const std::string& val );

    bool operator==( const Room_ChangePasswd_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( roomnum == rhs.roomnum ) )
            return false;
        if ( !( Opasswd == rhs.Opasswd ) )
            return false;
        if ( !( Npasswd == rhs.Npasswd ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangePasswd_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangePasswd_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangePasswd_SendInfo& a, Room_ChangePasswd_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangePasswd_SendInfo& obj );

typedef struct _Room_ChangePasswd_RecvInfo__isset {
    _Room_ChangePasswd_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_ChangePasswd_RecvInfo__isset;

class Room_ChangePasswd_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangePasswd_RecvInfo( const Room_ChangePasswd_RecvInfo& );
    Room_ChangePasswd_RecvInfo& operator=( const Room_ChangePasswd_RecvInfo& );
    Room_ChangePasswd_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_ChangePasswd_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_ChangePasswd_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_ChangePasswd_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangePasswd_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangePasswd_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangePasswd_RecvInfo& a, Room_ChangePasswd_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangePasswd_RecvInfo& obj );

typedef struct _Room_ChangeExtraInfo_SendInfo__isset {
    _Room_ChangeExtraInfo_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), roomnum( false ), info( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool roomnum : 1;
    bool info : 1;
} _Room_ChangeExtraInfo_SendInfo__isset;

class Room_ChangeExtraInfo_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangeExtraInfo_SendInfo( const Room_ChangeExtraInfo_SendInfo& );
    Room_ChangeExtraInfo_SendInfo& operator=( const Room_ChangeExtraInfo_SendInfo& );
    Room_ChangeExtraInfo_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), roomnum(), info() {}

    virtual ~Room_ChangeExtraInfo_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    std::string roomnum;
    std::string info;

    _Room_ChangeExtraInfo_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_roomnum( const std::string& val );

    void __set_info( const std::string& val );

    bool operator==( const Room_ChangeExtraInfo_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( roomnum == rhs.roomnum ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangeExtraInfo_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangeExtraInfo_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangeExtraInfo_SendInfo& a, Room_ChangeExtraInfo_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangeExtraInfo_SendInfo& obj );

typedef struct _Room_ChangeExtraInfo_RecvInfo__isset {
    _Room_ChangeExtraInfo_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_ChangeExtraInfo_RecvInfo__isset;

class Room_ChangeExtraInfo_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangeExtraInfo_RecvInfo( const Room_ChangeExtraInfo_RecvInfo& );
    Room_ChangeExtraInfo_RecvInfo& operator=( const Room_ChangeExtraInfo_RecvInfo& );
    Room_ChangeExtraInfo_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_ChangeExtraInfo_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_ChangeExtraInfo_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_ChangeExtraInfo_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangeExtraInfo_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangeExtraInfo_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangeExtraInfo_RecvInfo& a, Room_ChangeExtraInfo_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangeExtraInfo_RecvInfo& obj );

typedef struct _Room_ChangeDebatePos_SendInfo__isset {
    _Room_ChangeDebatePos_SendInfo__isset() : type( false ), jwt_token( false ), sendtime( false ), Debate_pos( false ) {}
    bool type : 1;
    bool jwt_token : 1;
    bool sendtime : 1;
    bool Debate_pos : 1;
} _Room_ChangeDebatePos_SendInfo__isset;

class Room_ChangeDebatePos_SendInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangeDebatePos_SendInfo( const Room_ChangeDebatePos_SendInfo& );
    Room_ChangeDebatePos_SendInfo& operator=( const Room_ChangeDebatePos_SendInfo& );
    Room_ChangeDebatePos_SendInfo() noexcept : type( 0 ), jwt_token(), sendtime( 0 ), Debate_pos( 0 ) {}

    virtual ~Room_ChangeDebatePos_SendInfo() noexcept;
    int32_t     type;
    std::string jwt_token;
    int32_t     sendtime;
    int32_t     Debate_pos;

    _Room_ChangeDebatePos_SendInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_jwt_token( const std::string& val );

    void __set_sendtime( const int32_t val );

    void __set_Debate_pos( const int32_t val );

    bool operator==( const Room_ChangeDebatePos_SendInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( jwt_token == rhs.jwt_token ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( Debate_pos == rhs.Debate_pos ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangeDebatePos_SendInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangeDebatePos_SendInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangeDebatePos_SendInfo& a, Room_ChangeDebatePos_SendInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangeDebatePos_SendInfo& obj );

typedef struct _Room_ChangeDebatePos_RecvInfo__isset {
    _Room_ChangeDebatePos_RecvInfo__isset() : type( false ), sendtime( false ), status( false ), info( false ) {}
    bool type : 1;
    bool sendtime : 1;
    bool status : 1;
    bool info : 1;
} _Room_ChangeDebatePos_RecvInfo__isset;

class Room_ChangeDebatePos_RecvInfo : public virtual ::apache::thrift::TBase {
public:
    Room_ChangeDebatePos_RecvInfo( const Room_ChangeDebatePos_RecvInfo& );
    Room_ChangeDebatePos_RecvInfo& operator=( const Room_ChangeDebatePos_RecvInfo& );
    Room_ChangeDebatePos_RecvInfo() noexcept : type( 0 ), sendtime( 0 ), status( 0 ), info() {}

    virtual ~Room_ChangeDebatePos_RecvInfo() noexcept;
    int32_t     type;
    int32_t     sendtime;
    int32_t     status;
    std::string info;

    _Room_ChangeDebatePos_RecvInfo__isset __isset;

    void __set_type( const int32_t val );

    void __set_sendtime( const int32_t val );

    void __set_status( const int32_t val );

    void __set_info( const std::string& val );

    bool operator==( const Room_ChangeDebatePos_RecvInfo& rhs ) const {
        if ( !( type == rhs.type ) )
            return false;
        if ( !( sendtime == rhs.sendtime ) )
            return false;
        if ( !( status == rhs.status ) )
            return false;
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Room_ChangeDebatePos_RecvInfo& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Room_ChangeDebatePos_RecvInfo& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot ) override;
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const override;

    virtual void printTo( std::ostream& out ) const;
};

void swap( Room_ChangeDebatePos_RecvInfo& a, Room_ChangeDebatePos_RecvInfo& b );

std::ostream& operator<<( std::ostream& out, const Room_ChangeDebatePos_RecvInfo& obj );

#endif
