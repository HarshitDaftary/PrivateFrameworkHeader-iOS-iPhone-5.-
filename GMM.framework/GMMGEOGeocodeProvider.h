/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GEOGeocodeRequest, PBRequester, GEOSearchRequest;

@interface GMMGEOGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
    GEOGeocodeRequest *_request;
    PBRequester *_requester;
    GEOSearchRequest *_searchRequest;
}

+ (id)providerName;
+ (unsigned short)provider;

- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)cancel;
- (void)dealloc;

@end
