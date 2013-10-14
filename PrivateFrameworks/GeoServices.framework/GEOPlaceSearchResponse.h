/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    double _turnaroundTime;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_placeResults;
    NSMutableArray *_searchs;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    BOOL _abTestResponse;
    struct { 
        unsigned int turnaroundTime : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int statusCodeInfo : 1; 
        unsigned int abTestResponse : 1; 
    } _has;
}

@property int status;
@property(retain) NSMutableArray * placeResults;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * searchs;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;
@property BOOL hasAbTestResponse;
@property BOOL abTestResponse;
@property(retain) NSMutableArray * suggestionEntryLists;
@property(readonly) BOOL hasSuggestionMetadata;
@property(retain) NSData * suggestionMetadata;
@property BOOL hasStatusCodeInfo;
@property int statusCodeInfo;
@property BOOL hasTurnaroundTime;
@property double turnaroundTime;


- (id)suggestionEntryLists;
- (id)searchs;
- (id)placeResults;
- (void)setHasTurnaroundTime:(BOOL)arg1;
- (void)setHasStatusCodeInfo:(BOOL)arg1;
- (void)setHasAbTestResponse:(BOOL)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (double)turnaroundTime;
- (BOOL)hasTurnaroundTime;
- (void)setStatusCodeInfo:(int)arg1;
- (int)statusCodeInfo;
- (BOOL)hasStatusCodeInfo;
- (id)suggestionMetadata;
- (BOOL)hasSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(unsigned int)arg1;
- (void)clearSuggestionEntryLists;
- (unsigned int)suggestionEntryListsCount;
- (void)setAbTestResponse:(BOOL)arg1;
- (BOOL)abTestResponse;
- (BOOL)hasAbTestResponse;
- (id)searchAtIndex:(unsigned int)arg1;
- (void)clearSearchs;
- (unsigned int)searchsCount;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (void)clearPlaceResults;
- (unsigned int)placeResultsCount;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)addSearch:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setSearchs:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (int)localSearchProviderID;
- (BOOL)hasLocalSearchProviderID;
- (void)copyTo:(id)arg1;
- (id)mapRegion;
- (BOOL)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end