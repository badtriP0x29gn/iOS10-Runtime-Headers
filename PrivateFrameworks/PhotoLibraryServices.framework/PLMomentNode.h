/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CLLocation, NSManagedObjectID, NSDate, PLMomentCluster;

@interface PLMomentNode : NSObject  {
    BOOL _marked;
    BOOL _visited;
    NSManagedObjectID *__objectID;
    CLLocation *__location;
    NSDate *__creationDate;
    PLMomentCluster *__cluster;
}

@property(getter=isMarked) BOOL marked;
@property(getter=isVisited) BOOL visited;
@property PLMomentCluster * cluster;
@property(readonly) NSManagedObjectID * objectID;
@property(readonly) NSDate * creationDate;
@property(readonly) CLLocation * location;
@property(readonly) struct { double x1; double x2; } coordinate;


- (id)initWithPartialFetchDictionary:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;
- (void)setMarked:(BOOL)arg1;
- (id)cluster;
- (void)setVisited:(BOOL)arg1;
- (BOOL)isVisited;
- (void)setCluster:(id)arg1;
- (BOOL)isMarked;
- (id)location;
- (id)objectID;
- (id)creationDate;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;

@end