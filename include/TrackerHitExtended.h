#ifndef TRACKERHITAR_H
#define TRACKERHITAR_H 1

#include "lcio.h"
#include "EVENT/LCIO.h"
#include "EVENT/TrackerHit.h"
#include "TrackExtended.h"
#include <vector>


using namespace lcio;

class TrackExtended;

typedef std::vector<TrackExtended*> TrackExtendedVec;

/**
 * Class extending native LCIO class TrackerHit. <br>
 * Class TrackerHitExtended is used in TrackwiseClustering <br>
 * and Wolf processors. <br>
 * @author A. Raspereza (DESY)<br>
 * @version $Id: TrackerHitExtended.h,v 1.5 2006-04-26 10:04:04 rasp Exp $<br>
 */
class TrackerHitExtended {

 public:

    TrackerHitExtended(TrackerHit * trackerhit);
    ~TrackerHitExtended();
    void setTrackExtended(TrackExtended * trackAR);
    void addTrackExtended(TrackExtended * trackAR);
    void setTrackerHitTo(TrackerHitExtended * hitTo);
    void setTrackerHitFrom(TrackerHitExtended * hitFrom);
    void setGenericDistance(float genericDistance);
    void setTrackerHit(TrackerHit * hit);
    void setYresTo(float yresTo);
    void setYresFrom(float yresFrom);
    void setDirVec(float * dirVec);
    void clearTrackVec();
    void setResolutionRPhi(float rphiReso);
    void setResolutionZ(float zReso);

    TrackerHit * getTrackerHit();
    TrackExtended * getTrackExtended();
    TrackExtendedVec & getTrackExtendedVec();
    TrackerHitExtended * getTrackerHitFrom();
    TrackerHitExtended * getTrackerHitTo();
    float getGenericDistance();
    float getYresTo();
    float getYresFrom();
    float * getDirVec();
    float getResolutionRPhi();
    float getResolutionZ();

 private:

    TrackerHit * _trackerHit;
    TrackExtended * _trackAR;
    TrackerHitExtended * _hitTo;
    TrackerHitExtended * _hitFrom;
    TrackExtendedVec _trackVecAR;

    float _rphiReso;
    float _zReso;
    float _yresTo;
    float _yresFrom;
    float _genericDistance;
    float _dirVec[3];
	
};



#endif
