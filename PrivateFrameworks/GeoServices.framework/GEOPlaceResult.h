/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString, GEOPlaceSearchRequest, NSMutableArray, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {
    double _confidence;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
    struct { 
        unsigned int confidence : 1; 
        unsigned int travelTime : 1; 
    } _has;
}

@property(retain) GEOPlace * place;
@property BOOL hasConfidence;
@property double confidence;
@property(retain) NSMutableArray * additionalPlaces;
@property(readonly) BOOL hasSuggestedQuery;
@property(retain) NSString * suggestedQuery;
@property BOOL hasTravelTime;
@property unsigned int travelTime;
@property(readonly) BOOL hasTokenEntity;
@property(retain) GEOAddress * tokenEntity;
@property(readonly) BOOL hasQuad;
@property(retain) NSString * quad;
@property(retain) NSMutableArray * unmatchedStrings;
@property(retain) NSMutableArray * namedFeatures;
@property(readonly) BOOL hasRevgeoRequestTemplate;
@property(retain) GEOPlaceSearchRequest * revgeoRequestTemplate;
@property(retain) NSMutableArray * matchedTokens;


- (id)additionalPlaces;
- (id)matchedTokens;
- (id)namedFeatures;
- (id)unmatchedStrings;
- (void)setHasTravelTime:(BOOL)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (id)matchedTokenAtIndex:(unsigned int)arg1;
- (void)clearMatchedTokens;
- (unsigned int)matchedTokensCount;
- (id)revgeoRequestTemplate;
- (BOOL)hasRevgeoRequestTemplate;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (void)clearNamedFeatures;
- (unsigned int)namedFeaturesCount;
- (id)unmatchedStringAtIndex:(unsigned int)arg1;
- (void)clearUnmatchedStrings;
- (unsigned int)unmatchedStringsCount;
- (BOOL)hasQuad;
- (id)tokenEntity;
- (BOOL)hasTokenEntity;
- (void)setTravelTime:(unsigned int)arg1;
- (unsigned int)travelTime;
- (BOOL)hasTravelTime;
- (id)suggestedQuery;
- (BOOL)hasSuggestedQuery;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaces;
- (unsigned int)additionalPlacesCount;
- (void)setConfidence:(double)arg1;
- (BOOL)hasConfidence;
- (id)place;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)setMatchedTokens:(id)arg1;
- (void)setRevgeoRequestTemplate:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (double)confidence;
- (id)quad;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end