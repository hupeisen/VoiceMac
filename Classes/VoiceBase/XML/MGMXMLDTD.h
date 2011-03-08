//
//  MGMXMLDTD.h
//  MGMXML
//
//  Created by Mr. Gecko on 9/22/10.
//  Copyright (c) 2011 Mr. Gecko's Media (James Coleman). http://mrgeckosmedia.com/
//
//  Permission to use, copy, modify, and/or distribute this software for any purpose
//  with or without fee is hereby granted, provided that the above copyright notice
//  and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
//  REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT,
//  OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
//  DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
//  ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif
#import <VoiceBase/MGMXMLNode.h>

@interface MGMXMLDTD : MGMXMLNode {

}
//- (id)initWithContentsOfURL:(NSURL *)url options:(NSUInteger)mask error:(NSError **)error;
//- (id)initWithData:(NSData *)data options:(NSUInteger)mask error:(NSError **)error; //primitive
//- (void)setPublicID:(NSString *)publicID; //primitive
//- (NSString *)publicID; //primitive
//- (void)setSystemID:(NSString *)systemID; //primitive
//- (NSString *)systemID; //primitive

//- (void)insertChild:(MGMXMLNode *)child atIndex:(NSUInteger)index; //primitive
//- (void)insertChildren:(NSArray *)children atIndex:(NSUInteger)index;
//- (void)removeChildAtIndex:(NSUInteger)index; //primitive
//- (void)setChildren:(NSArray *)children; //primitive
//- (void)addChild:(MGMXMLNode *)child;
//- (void)replaceChildAtIndex:(NSUInteger)index withNode:(MGMXMLNode *)node;

//- (MGMXMLDTDNode *)entityDeclarationForName:(NSString *)name; //primitive
//- (MGMXMLDTDNode *)notationDeclarationForName:(NSString *)name; //primitive
//- (MGMXMLDTDNode *)elementDeclarationForName:(NSString *)name; //primitive
//- (MGMXMLDTDNode *)attributeDeclarationForName:(NSString *)name elementName:(NSString *)elementName; //primitive
//+ (MGMXMLDTDNode *)predefinedEntityDeclarationForName:(NSString *)name;
@end