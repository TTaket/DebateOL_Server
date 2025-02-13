/**
 * Autogenerated by Thrift Compiler (0.19.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Echo_H
#define Echo_H

#include "echo_types.h"
#include <memory>
#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 )  // inheriting methods via dominance
#endif

class EchoIf {
public:
    virtual ~EchoIf() {}
    virtual void Echo_Send( Echo_RecvInfo& _return, const Echo_SendInfo& info ) = 0;
};

class EchoIfFactory {
public:
    typedef EchoIf Handler;

    virtual ~EchoIfFactory() {}

    virtual EchoIf* getHandler( const ::apache::thrift::TConnectionInfo& connInfo ) = 0;
    virtual void    releaseHandler( EchoIf* /* handler */ )                         = 0;
};

class EchoIfSingletonFactory : virtual public EchoIfFactory {
public:
    EchoIfSingletonFactory( const ::std::shared_ptr< EchoIf >& iface ) : iface_( iface ) {}
    virtual ~EchoIfSingletonFactory() {}

    virtual EchoIf* getHandler( const ::apache::thrift::TConnectionInfo& ) override {
        return iface_.get();
    }
    virtual void releaseHandler( EchoIf* /* handler */ ) override {}

protected:
    ::std::shared_ptr< EchoIf > iface_;
};

class EchoNull : virtual public EchoIf {
public:
    virtual ~EchoNull() {}
    void Echo_Send( Echo_RecvInfo& /* _return */, const Echo_SendInfo& /* info */ ) override {
        return;
    }
};

typedef struct _Echo_Echo_Send_args__isset {
    _Echo_Echo_Send_args__isset() : info( false ) {}
    bool info : 1;
} _Echo_Echo_Send_args__isset;

class Echo_Echo_Send_args {
public:
    Echo_Echo_Send_args( const Echo_Echo_Send_args& );
    Echo_Echo_Send_args& operator=( const Echo_Echo_Send_args& );
    Echo_Echo_Send_args() noexcept {}

    virtual ~Echo_Echo_Send_args() noexcept;
    Echo_SendInfo info;

    _Echo_Echo_Send_args__isset __isset;

    void __set_info( const Echo_SendInfo& val );

    bool operator==( const Echo_Echo_Send_args& rhs ) const {
        if ( !( info == rhs.info ) )
            return false;
        return true;
    }
    bool operator!=( const Echo_Echo_Send_args& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Echo_Echo_Send_args& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot );
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const;
};

class Echo_Echo_Send_pargs {
public:
    virtual ~Echo_Echo_Send_pargs() noexcept;
    const Echo_SendInfo* info;

    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const;
};

typedef struct _Echo_Echo_Send_result__isset {
    _Echo_Echo_Send_result__isset() : success( false ) {}
    bool success : 1;
} _Echo_Echo_Send_result__isset;

class Echo_Echo_Send_result {
public:
    Echo_Echo_Send_result( const Echo_Echo_Send_result& );
    Echo_Echo_Send_result& operator=( const Echo_Echo_Send_result& );
    Echo_Echo_Send_result() noexcept {}

    virtual ~Echo_Echo_Send_result() noexcept;
    Echo_RecvInfo success;

    _Echo_Echo_Send_result__isset __isset;

    void __set_success( const Echo_RecvInfo& val );

    bool operator==( const Echo_Echo_Send_result& rhs ) const {
        if ( !( success == rhs.success ) )
            return false;
        return true;
    }
    bool operator!=( const Echo_Echo_Send_result& rhs ) const {
        return !( *this == rhs );
    }

    bool operator<( const Echo_Echo_Send_result& ) const;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot );
    uint32_t write( ::apache::thrift::protocol::TProtocol* oprot ) const;
};

typedef struct _Echo_Echo_Send_presult__isset {
    _Echo_Echo_Send_presult__isset() : success( false ) {}
    bool success : 1;
} _Echo_Echo_Send_presult__isset;

class Echo_Echo_Send_presult {
public:
    virtual ~Echo_Echo_Send_presult() noexcept;
    Echo_RecvInfo* success;

    _Echo_Echo_Send_presult__isset __isset;

    uint32_t read( ::apache::thrift::protocol::TProtocol* iprot );
};

class EchoClient : virtual public EchoIf {
public:
    EchoClient( std::shared_ptr< ::apache::thrift::protocol::TProtocol > prot ) {
        setProtocol( prot );
    }
    EchoClient( std::shared_ptr< ::apache::thrift::protocol::TProtocol > iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol > oprot ) {
        setProtocol( iprot, oprot );
    }

private:
    void setProtocol( std::shared_ptr< ::apache::thrift::protocol::TProtocol > prot ) {
        setProtocol( prot, prot );
    }
    void setProtocol( std::shared_ptr< ::apache::thrift::protocol::TProtocol > iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol > oprot ) {
        piprot_ = iprot;
        poprot_ = oprot;
        iprot_  = iprot.get();
        oprot_  = oprot.get();
    }

public:
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > getInputProtocol() {
        return piprot_;
    }
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > getOutputProtocol() {
        return poprot_;
    }
    void Echo_Send( Echo_RecvInfo& _return, const Echo_SendInfo& info ) override;
    void send_Echo_Send( const Echo_SendInfo& info );
    void recv_Echo_Send( Echo_RecvInfo& _return );

protected:
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > piprot_;
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > poprot_;
    ::apache::thrift::protocol::TProtocol*                   iprot_;
    ::apache::thrift::protocol::TProtocol*                   oprot_;
};

class EchoProcessor : public ::apache::thrift::TDispatchProcessor {
protected:
    ::std::shared_ptr< EchoIf > iface_;
    virtual bool dispatchCall( ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext ) override;

private:
    typedef void ( EchoProcessor::*ProcessFunction )( int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void* );
    typedef std::map< std::string, ProcessFunction > ProcessMap;
    ProcessMap                                       processMap_;
    void                                             process_Echo_Send( int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext );

public:
    EchoProcessor( ::std::shared_ptr< EchoIf > iface ) : iface_( iface ) {
        processMap_[ "Echo_Send" ] = &EchoProcessor::process_Echo_Send;
    }

    virtual ~EchoProcessor() {}
};

class EchoProcessorFactory : public ::apache::thrift::TProcessorFactory {
public:
    EchoProcessorFactory( const ::std::shared_ptr< EchoIfFactory >& handlerFactory ) noexcept : handlerFactory_( handlerFactory ) {}

    ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor( const ::apache::thrift::TConnectionInfo& connInfo ) override;

protected:
    ::std::shared_ptr< EchoIfFactory > handlerFactory_;
};

class EchoMultiface : virtual public EchoIf {
public:
    EchoMultiface( std::vector< std::shared_ptr< EchoIf > >& ifaces ) : ifaces_( ifaces ) {}
    virtual ~EchoMultiface() {}

protected:
    std::vector< std::shared_ptr< EchoIf > > ifaces_;
    EchoMultiface() {}
    void add( ::std::shared_ptr< EchoIf > iface ) {
        ifaces_.push_back( iface );
    }

public:
    void Echo_Send( Echo_RecvInfo& _return, const Echo_SendInfo& info ) override {
        size_t sz = ifaces_.size();
        size_t i  = 0;
        for ( ; i < ( sz - 1 ); ++i ) {
            ifaces_[ i ]->Echo_Send( _return, info );
        }
        ifaces_[ i ]->Echo_Send( _return, info );
        return;
    }
};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class EchoConcurrentClient : virtual public EchoIf {
public:
    EchoConcurrentClient( std::shared_ptr< ::apache::thrift::protocol::TProtocol > prot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo > sync ) : sync_( sync ) {
        setProtocol( prot );
    }
    EchoConcurrentClient( std::shared_ptr< ::apache::thrift::protocol::TProtocol > iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol > oprot,
                          std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo > sync )
        : sync_( sync ) {
        setProtocol( iprot, oprot );
    }

private:
    void setProtocol( std::shared_ptr< ::apache::thrift::protocol::TProtocol > prot ) {
        setProtocol( prot, prot );
    }
    void setProtocol( std::shared_ptr< ::apache::thrift::protocol::TProtocol > iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol > oprot ) {
        piprot_ = iprot;
        poprot_ = oprot;
        iprot_  = iprot.get();
        oprot_  = oprot.get();
    }

public:
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > getInputProtocol() {
        return piprot_;
    }
    std::shared_ptr< ::apache::thrift::protocol::TProtocol > getOutputProtocol() {
        return poprot_;
    }
    void    Echo_Send( Echo_RecvInfo& _return, const Echo_SendInfo& info ) override;
    int32_t send_Echo_Send( const Echo_SendInfo& info );
    void    recv_Echo_Send( Echo_RecvInfo& _return, const int32_t seqid );

protected:
    std::shared_ptr< ::apache::thrift::protocol::TProtocol >              piprot_;
    std::shared_ptr< ::apache::thrift::protocol::TProtocol >              poprot_;
    ::apache::thrift::protocol::TProtocol*                                iprot_;
    ::apache::thrift::protocol::TProtocol*                                oprot_;
    std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo > sync_;
};

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif
