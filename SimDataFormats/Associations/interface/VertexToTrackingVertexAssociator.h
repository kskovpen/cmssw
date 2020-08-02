#ifndef SimDataFormats_Associations_VertexToTrackingVertexAssociator_h
#define SimDataFormats_Associations_VertexToTrackingVertexAssociator_h

#include "SimDataFormats/Associations/interface/VertexAssociation.h"

#include "SimDataFormats/Associations/interface/VertexToTrackingVertexAssociatorBaseImpl.h"

namespace reco {
  class VertexToTrackingVertexAssociator {
  public:
#ifndef __GCCXML__
    VertexToTrackingVertexAssociator(std::unique_ptr<reco::VertexToTrackingVertexAssociatorBaseImpl>);
#endif
    VertexToTrackingVertexAssociator() = default;
    VertexToTrackingVertexAssociator(VertexToTrackingVertexAssociator &&) = default;
    VertexToTrackingVertexAssociator &operator=(VertexToTrackingVertexAssociator &&) = default;
    ~VertexToTrackingVertexAssociator() = default;

    // ---------- const member functions ---------------------
    /// compare reco to sim the handle of reco::Vertex and TrackingVertex
    /// collections
/*    reco::VertexRecoToSimCollection associateRecoToSim(const edm::Handle<edm::View<reco::Vertex>> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH) const {
      return m_impl->associateRecoToSim(vCH, tVCH);
    }*/

/*    reco::VertexRecoToSimCollection associateRecoToSim(const edm::Handle<edm::View<reco::Vertex>> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH, const reco::RecoToSimCollection &trackRecoToSimAssociation) const {
      return m_impl->associateRecoToSim(vCH, tVCH, trackRecoToSimAssociation);
    }*/
    reco::VertexRecoToSimCollection associateRecoToSim(const edm::Handle<VertexCollection> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH, const reco::RecoToSimCollection &trackRecoToSimAssociation) const {
      return m_impl->associateRecoToSim(vCH, tVCH, trackRecoToSimAssociation);
    }
     
    /// compare reco to sim the handle of reco::Vertex and TrackingVertex
    /// collections
/*    reco::VertexSimToRecoCollection associateSimToReco(const edm::Handle<edm::View<reco::Vertex>> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH) const {
      return m_impl->associateSimToReco(vCH, tVCH);
    }*/

/*    reco::VertexSimToRecoCollection associateSimToReco(const edm::Handle<edm::View<reco::Vertex>> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH, const reco::SimToRecoCollection &trackSimToRecoAssociation) const {
      return m_impl->associateSimToReco(vCH, tVCH, trackSimToRecoAssociation);
    }*/
    reco::VertexSimToRecoCollection associateSimToReco(const edm::Handle<VertexCollection> &vCH,
                                                       const edm::Handle<TrackingVertexCollection> &tVCH, const reco::SimToRecoCollection &trackSimToRecoAssociation) const {
      return m_impl->associateSimToReco(vCH, tVCH, trackSimToRecoAssociation);
    }
     
  private:
    VertexToTrackingVertexAssociator(const VertexToTrackingVertexAssociator &) = delete;  // stop default

    const VertexToTrackingVertexAssociator &operator=(const VertexToTrackingVertexAssociator &) =
        delete;  // stop default

    // ---------- member data --------------------------------
    std::unique_ptr<VertexToTrackingVertexAssociatorBaseImpl> m_impl;
  };
}  // namespace reco

#endif
