
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/evs/model/RollbackSnapshotRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  RollbackSnapshotRequest
    : public ModelBase
{
public:
    RollbackSnapshotRequest();
    virtual ~RollbackSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RollbackSnapshotRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RollbackSnapshotRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RollbackSnapshotRequestBody& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    RollbackSnapshotRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RollbackSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<RollbackSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_