//
// Copyright 2011 Jeff Verkoeyen
// This file has been automatically generated by Nimbus' namespacing script.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __NIMBUS_NAMESPACE_PREFIX_
#error You must define __NIMBUS_NAMESPACE_PREFIX_ in your project settings in order to use a Nimbus namespace.
#else

#ifndef __NIMBUS_NS_SYMBOL
// We need to have multiple levels of macros here so that __NIMBUS_NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NIMBUS_NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NIMBUS_NS_BRIDGE(ns, symbol) __NIMBUS_NS_REWRITE(ns, symbol)
#define __NIMBUS_NS_SYMBOL(symbol) __NIMBUS_NS_BRIDGE(__NIMBUS_NAMESPACE_PREFIX_, symbol)
#endif

// Classes
#ifndef AFImageRequestOperation
#define AFImageRequestOperation __NIMBUS_NS_SYMBOL(AFImageRequestOperation)
#endif
#ifndef NIImageProcessing
#define NIImageProcessing __NIMBUS_NS_SYMBOL(NIImageProcessing)
#endif
#ifndef NINetworkImageView
#define NINetworkImageView __NIMBUS_NS_SYMBOL(NINetworkImageView)
#endif
#ifndef NIOperation
#define NIOperation __NIMBUS_NS_SYMBOL(NIOperation)
#endif
#ifndef Nimbus
#define Nimbus __NIMBUS_NS_SYMBOL(Nimbus)
#endif
// Functions
// Externs
#endif
