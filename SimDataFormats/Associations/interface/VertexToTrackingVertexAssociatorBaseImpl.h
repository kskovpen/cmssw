#ifndef SimDataFormats_Associations_VertexToTrackingVertexAssociatorBaseImpl_h
#define SimDataFormats_Associations_VertexToTrackingVertexAssociatorBaseImpl_h

#include "DataFormats/Common/interface/Handle.h"
#include "SimDataFormats/Associations/interface/VertexAssociation.h"

#include "DataFormats/RecoCandidate/interface/TrackAssociation.h"

namespace reco {
  class VertexToTrackingVertexAssociatorBaseImpl {
  public:
    /// Constructor
    VertexToTrackingVertexAssociatorBaseImpl();
    /// Destructor
    virtual ~VertexToTrackingVertexAssociatorBaseImpl();

    /// compare reco to sim the handle of reco::Vertex and TrackingVertex
    /// collections
//    virtual reco::VertexRecoToSimCollection associateRecoToSim(
//        const edm::Handle<edm::View<reco::Vertex>> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH) const = 0;

/*    virtual reco::VertexRecoToSimCollection associateRecoToSim(
        const edm::Handle<edm::View<reco::Vertex>> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH, const RecoToSimCollection &trackRecoToSimAssociation) const = 0;*/
    virtual reco::VertexRecoToSimCollection associateRecoToSim(
        const edm::Handle<VertexCollection> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH, const RecoToSimCollection &trackRecoToSimAssociation) const = 0;
     
    /// compare reco to sim the handle of reco::Vertex and TrackingVertex
    /// collections
//    virtual reco::VertexSimToRecoCollection associateSimToReco(
//        const edm::Handle<edm::View<reco::Vertex>> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH) const = 0;

/*    virtual reco::VertexSimToRecoCollection associateSimToReco(
	const edm::Handle<edm::View<reco::Vertex>> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH, const SimToRecoCollection &trackSimToRecoAssociation) const = 0;*/
    virtual reco::VertexSimToRecoCollection associateSimToReco(
	const edm::Handle<VertexCollection> &vCH, const edm::Handle<TrackingVertexCollection> &tVCH, const SimToRecoCollection &trackSimToRecoAssociation) const = 0;
  };
}  // namespace reco

#endif
