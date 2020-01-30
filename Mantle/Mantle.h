//
//  Mantle.h
//  Mantle
//
//  Created by Justin Spahr-Summers on 2012-09-04.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for Mantle.
FOUNDATION_EXPORT double MantleVersionNumber;

//! Project version string for Mantle.
FOUNDATION_EXPORT const unsigned char MantleVersionString[];

#import <MantleObjC/MTLJSONAdapter.h>
#import <MantleObjC/MTLModel.h>
#import <MantleObjC/MTLModel+NSCoding.h>
#import <MantleObjC/MTLValueTransformer.h>
#import <MantleObjC/MTLTransformerErrorHandling.h>
#import <MantleObjC/NSArray+MTLManipulationAdditions.h>
#import <MantleObjC/NSDictionary+MTLManipulationAdditions.h>
#import <MantleObjC/NSDictionary+MTLMappingAdditions.h>
#import <MantleObjC/NSObject+MTLComparisonAdditions.h>
#import <MantleObjC/NSValueTransformer+MTLInversionAdditions.h>
#import <MantleObjC/NSValueTransformer+MTLPredefinedTransformerAdditions.h>
