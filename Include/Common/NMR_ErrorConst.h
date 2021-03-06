/*++

Copyright (C) 2015 netfabb GmbH (Original Author)

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Abstract:

NMR_ErrorConst.h defines all error code constants.

--*/

#ifndef __NMR_ERRORCONST
#define __NMR_ERRORCONST

// This is the output value of a "uncatched exception"
#define NMR_GENERICEXCEPTIONSTRING "uncatched exception"

// Function has suceeded, there has been no error
#define NMR_SUCCESS 0

/*-------------------------------------------------------------------
  General error codes (0x1XXX)
-------------------------------------------------------------------*/

// The called function is not fully implemented
#define NMR_ERROR_NOTIMPLEMENTED 0x1000

// The call parameter to the function was invalid
#define NMR_ERROR_INVALIDPARAM 0x1001

// The Calculation has to be canceled
#define NMR_ERROR_CALCULATIONTERMINATED 0x1002

// The DLL Library of the DLL Filters could not be loaded
#define NMR_ERROR_COULDNOTLOADLIBRARY 0x1003

// The DLL Library of the DLL Filters is invalid
#define NMR_ERROR_GETPROCFAILED 0x1004

// The DLL Library has not been loaded or could not be loaded
#define NMR_ERROR_DLLNOTLOADED 0x1005

// The DLL Library of the DLL Filters is invalid
#define NMR_ERROR_DLLFUNCTIONNOTFOUND 0x1006

// The DLL Library has got an invalid parameter
#define NMR_ERROR_DLLINVALIDPARAM 0x1007

// No Instance of the DLL has been created
#define NMR_ERROR_DLLNOINSTANCE 0x1008

// The DLL returns this, if it does not support the suspected filters
#define NMR_ERROR_DLLINVALIDFILTERNAME 0x1009

// The DLL returns this, if not all parameters are provided
#define NMR_ERROR_DLLMISSINGPARAMETER 0x100A

// The provided Blocksize is invalid (like in CPagedVector)
#define NMR_ERROR_INVALIDBLOCKSIZE 0x100B

// The provided Index is invalid (like in CPagedVector, Node Index)
#define NMR_ERROR_INVALIDINDEX 0x100C

// A Matrix could not be inverted in the Matrix functions (as it is singular)
#define NMR_ERROR_SINGULARMATRIX 0x100D

// The Model Object does not match the model which is it added to
#define NMR_ERROR_MODELMISMATCH 0x100E

// The function called is abstract and should not have been called
#define NMR_ERROR_ABSTRACT 0x100F

// The current block is not assigned
#define NMR_ERROR_INVALIDHEADBLOCK 0x1010

// COM CoInitialize failed
#define NMR_ERROR_COMINITIALIZATIONFAILED 0x1011

// A Standard C++ Exception occured
#define NMR_ERROR_STANDARDCPPEXCEPTION 0x1012

// No mesh has been given
#define NMR_ERROR_INVALIDMESH 0x1013

// Context could not be created
#define NMR_ERROR_COULDNOTCREATECONTEXT 0x1014

// Wanted to convert empty string to integer
#define NMR_ERROR_EMPTYSTRINGTOINTCONVERSION 0x1015

// Wanted to convert string with non-numeric characters to integer
#define NMR_ERROR_INVALIDSTRINGTOINTCONVERSION 0x1016

// Wanted to convert too large number string to integer
#define NMR_ERROR_STRINGTOINTCONVERSIONOUTOFRANGE 0x1017

// Wanted to convert empty string to double
#define NMR_ERROR_EMPTYSTRINGTODOUBLECONVERSION 0x1018

// Wanted to convert string with non-numeric characters to double
#define NMR_ERROR_INVALIDSTRINGTODOUBLECONVERSION 0x1019

// Wanted to convert too large number string to double
#define NMR_ERROR_STRINGTODOUBLECONVERSIONOUTOFRANGE 0x101A

// Too many values (>12) have been found in a matrix string
#define NMR_ERROR_TOOMANYVALUESINMATRIXSTRING 0x101B

// Not enough values (<12) have been found in a matrix string
#define NMR_ERROR_NOTENOUGHVALUESINMATRIXSTRING 0x101C

// Invalid buffer size
#define NMR_ERROR_INVALIDBUFFERSIZE 0x101D

// Insufficient buffer size
#define NMR_ERROR_INSUFFICIENTBUFFERSIZE 0x101E

// No component has been given
#define NMR_ERROR_INVALIDCOMPONENT 0x101F

// Invalid hex value
#define NMR_ERROR_INVALIDHEXVALUE 0x1020

// Range error
#define NMR_ERROR_RANGEERROR 0x1021

// Generic Exception
#define NMR_ERROR_GENERICEXCEPTION 0x1022

// Passed an invalid null pointer
#define NMR_ERROR_INVALIDPOINTER 0x1023

// XML Element not open
#define NMR_ERROR_XMLELEMENTNOTOPEN 0x1024

// Invalid XML Name
#define NMR_ERROR_INVALIDXMLNAME 0x1025

// Invalid Integer Triplet String
#define NMR_ERROR_INVALIDINTEGERTRIPLET 0x1026


/*-------------------------------------------------------------------
  Core framework error codes (0x2XXX)
-------------------------------------------------------------------*/

// No Progress Interval has been specified in the progress handler
#define NMR_ERROR_NOPROGRESSINTERVAL 0x2001

// An Edge with two identical nodes has been tried to added to a mesh
#define NMR_ERROR_DUPLICATENODE 0x2002

// The mesh exceeds more than NMR_MESH_MAXEDGECOUNT (around two billion) nodes
#define NMR_ERROR_TOOMANYNODES 0x2003

// The mesh exceeds more than NMR_MESH_MAXFACECOUNT (around two billion) faces
#define NMR_ERROR_TOOMANYFACES 0x2004

// The index provided for the node is invalid
#define NMR_ERROR_INVALIDNODEINDEX 0x2005

// The index provided for the face is invalid
#define NMR_ERROR_INVALIDFACEINDEX 0x2006

// The mesh topology structure is corrupt
#define NMR_ERROR_INVALIDMESHTOPOLOGY 0x2007

// The coordinates exceed NMR_MESH_MAXCOORDINATE (= 1 billion mm)
#define NMR_ERROR_INVALIDCOORDINATES 0x2008

// A zero Vector has been tried to normalized, which is impossible
#define NMR_ERROR_NORMALIZEDZEROVECTOR 0x2009

// The specified file could not be opened
#define NMR_ERROR_COULDNOTOPENFILE 0x200A

// The specified file could not be created
#define NMR_ERROR_COULDNOTCREATEFILE 0x200B

// Seeking in a stream was not possible
#define NMR_ERROR_COULDNOTSEEKSTREAM 0x200C

// Reading from a stream was not possible
#define NMR_ERROR_COULDNOTREADSTREAM 0x200D

// Writing to a stream was not possible
#define NMR_ERROR_COULDNOTWRITESTREAM 0x200E

// Reading from a stream was only possible partially
#define NMR_ERROR_COULDNOTREADFULLDATA 0x200F

// Writing to a stream was only possible partially
#define NMR_ERROR_COULDNOTWRITEFULLDATA 0x2010

// No Import Stream was provided to the importer
#define NMR_ERROR_NOIMPORTSTREAM 0x2011

// The specified facecount in the file was not valid
#define NMR_ERROR_INVALIDFACECOUNT 0x2012

// The specified units of the file was not valid
#define NMR_ERROR_INVALIDUNITS 0x2013

// The specified units could not be set (for example, the CVectorTree already had some entries)
#define NMR_ERROR_COULDNOTSETUNITS 0x2014

// The mesh exceeds more than NMR_MESH_MAXEDGECOUNT (around two billion) edges
#define NMR_ERROR_TOOMANYEDGES 0x2015

// The index provided for the edge is invalid
#define NMR_ERROR_INVALIDEDGEINDEX 0x2016

// The mesh has an face with two identical edges
#define NMR_ERROR_DUPLICATEEDGE 0x2017

// Could not add face to an edge, because it was already two-manifold
#define NMR_ERROR_MANIFOLDEDGES 0x2018

// Could not delete edge, because it had attached faces
#define NMR_ERROR_COULDNOTDELETEEDGE 0x2019

// Mesh Merging has failed, because the mesh structure was currupted
#define NMR_ERROR_INTERNALMERGEERROR 0x201A

// The internal triangle structure is corrupted
#define NMR_ERROR_EDGESARENOTFORMINGTRIANGLE 0x201B

// No Export Stream was provided to the exporter
#define NMR_ERROR_NOEXPORTSTREAM 0x201C

// Could not set parameter, because the queue was not empty
#define NMR_ERROR_COULDNOTSETPARAMETER 0x201D

// Mesh Information records size is invalid
#define NMR_ERROR_INVALIDRECORDSIZE 0x201E

// Mesh Information Face Count dies not match with mesh face count
#define NMR_ERROR_MESHINFORMATIONCOUNTMISMATCH 0x201F

// Could not access mesh information
#define NMR_ERROR_INVALIDMESHINFORMATIONINDEX 0x2020

// Mesh Information Backup could not be created
#define NMR_ERROR_MESHINFORMATIONBUFFER_FULL 0x2021

// No Mesh Information Container has been assigned
#define NMR_ERROR_NOMESHINFORMATIONCONTAINER 0x2022

// Internal Mesh Merge Error because of corrupt mesh structure
#define NMR_ERROR_DISCRETEMERGEERROR 0x2023

// Discrete Edges may only have a max length of 30000.
#define NMR_ERROR_DISCRETEEDGELENGTHVIOLATION 0x2024

// OctTree Node is out of the OctTree Structure
#define NMR_ERROR_OCTTREE_OUTOFBOUNDS 0x2025

// Could not delete mesh node, because it still had some edges connected to it
#define NMR_ERROR_COULDNOTDELETENODE 0x2026

// Mesh Information has not been found
#define NMR_ERROR_INVALIDINFORMATIONTYPE 0x2027

// Mesh Information could not be copied
#define NMR_ERROR_FACESARENOTIDENTICAL 0x2028

// Texture is already existing
#define NMR_ERROR_DUPLICATETEXTURE 0x2029

// Texture ID is already existing
#define NMR_ERROR_DUPLICATETEXTUREID 0x202A

// Part is too large
#define NMR_ERROR_PARTTOOLARGE 0x202B

// Texture path is already existing
#define NMR_ERROR_DUPLICATETEXTUREPATH 0x202C

// Texture width is already existing
#define NMR_ERROR_DUPLICATETEXTUREWIDTH 0x202D

// Texture height is already existing
#define NMR_ERROR_DUPLICATETEXTUREHEIGHT 0x202E

// Texture depth is already existing
#define NMR_ERROR_DUPLICATETEXTUREDEPTH 0x202F

// Texture content type is already existing
#define NMR_ERROR_DUPLICATETEXTURECONTENTTYPE 0x2030

// Texture U coordinate is already existing
#define NMR_ERROR_DUPLICATETEXTUREU 0x2031

// Texture V coordinate is already existing
#define NMR_ERROR_DUPLICATETEXTUREV 0x2032

// Texture W coordinate is already existing
#define NMR_ERROR_DUPLICATETEXTUREW 0x2033

// Texture scale is already existing
#define NMR_ERROR_DUPLICATETEXTURESCALE 0x2034

// Texture rotation is already existing
#define NMR_ERROR_DUPLICATETEXTUREROTATION 0x2035

// Texture tilestyle U is already existing
#define NMR_ERROR_DUPLICATETILESTYLEU 0x2036

// Texture tilestyle V is already existing
#define NMR_ERROR_DUPLICATETILESTYLEV 0x2037

// Texture tilestyle W is already existing
#define NMR_ERROR_DUPLICATETILESTYLEW 0x2038

// Color ID is already existing
#define NMR_ERROR_DUPLICATECOLORID 0x2039

// Mesh Information Block was not assigned
#define NMR_ERROR_INVALIDMESHINFORMATIONDATA 0x203A

/*-------------------------------------------------------------------
Model error codes (0x8XXX)
-------------------------------------------------------------------*/

// 3MF Loading - OPC could not be loaded
#define NMR_ERROR_OPCREADFAILED 0x8001

// No model stream in OPC Container
#define NMR_ERROR_NOMODELSTREAM 0x8002

// Model XML could not be parsed
#define NMR_ERROR_MODELREADFAILED 0x8003

// No 3MF Object in OPC Container
#define NMR_ERROR_NO3MFOBJECT 0x8004

// Could not write Model Stream to OPC Container
#define NMR_ERROR_COULDNOTWRITEMODELSTREAM 0x8005

// Could not create OPC Factory
#define NMR_ERROR_OPCFACTORYCREATEFAILED 0x8006

// Could not read OPC Part Set
#define NMR_ERROR_OPCPARTSETREADFAILED 0x8007

// Could not read OPC Relationship Set
#define NMR_ERROR_OPCRELATIONSHIPSETREADFAILED 0x8008

// Could not get Relationship Source URI
#define NMR_ERROR_OPCRELATIONSHIPSOURCEURIFAILED 0x8009

// Could not get Relationship Target URI
#define NMR_ERROR_OPCRELATIONSHIPTARGETURIFAILED 0x800A

// Could not Combine Relationship URIs
#define NMR_ERROR_OPCRELATIONSHIPCOMBINEURIFAILED 0x800B

// Could not get Relationship Part
#define NMR_ERROR_OPCRELATIONSHIPGETPARTFAILED 0x800C

// Could not retrieve content type
#define NMR_ERROR_OPCGETCONTENTTYPEFAILED 0x800D

// Content type mismatch
#define NMR_ERROR_OPCCONTENTTYPEMISMATCH 0x800E

// Could not enumerate relationships
#define NMR_ERROR_OPCRELATIONSHIPENUMERATIONFAILED 0x800F

// Could not find relationship type
#define NMR_ERROR_OPCRELATIONSHIPNOTFOUND 0x8010

// Ambiguous relationship type
#define NMR_ERROR_OPCRELATIONSHIPNOTUNIQUE 0x8011

// Could not get OPC Model Stream
#define NMR_ERROR_OPCCOULDNOTGETMODELSTREAM 0x8012

// Could not create XML Reader
#define NMR_ERROR_CREATEXMLREADERFAILED 0x8013

// Could not set XML reader input
#define NMR_ERROR_SETXMLREADERINPUTFAILED 0x8014

// Could not seek in XML Model Stream
#define NMR_ERROR_COULDNOTSEEKMODELSTREAM 0x8015

// Could not set XML reader properties
#define NMR_ERROR_SETXMLPROPERTIESFAILED 0x8016

// Could not read XML node
#define NMR_ERROR_READXMLNODEFAILED 0x8017

// Could not retrieve local xml node name
#define NMR_ERROR_COULDNOTGETLOCALXMLNAME 0x8018

// Could not parse XML Node content
#define NMR_ERROR_COULDPARSEXMLCONTENT 0x8019

// Could not get XML Node value
#define NMR_ERROR_COULDNOTGETXMLTEXT 0x801A

// Could not retrieve XML Node attributes
#define NMR_ERROR_COULDNOTGETXMLATTRIBUTES 0x801B

// Could not get XML attribute value
#define NMR_ERROR_COULDNOTGETXMLVALUE 0x801C

// XML Node has already been parsed
#define NMR_ERROR_ALREADYPARSEDXMLNODE 0x801D

// Invalid Model Unit
#define NMR_ERROR_INVALIDMODELUNIT 0x801E

// Invalid Model Object ID
#define NMR_ERROR_INVALIDMODELOBJECTID 0x801F

// No Model Object ID has been given
#define NMR_ERROR_MISSINGMODELOBJECTID 0x8020

// Model Object is already existing
#define NMR_ERROR_DUPLICATEMODELOBJECT 0x8021

// Model Object ID was given twice
#define NMR_ERROR_DUPLICATEOBJECTID 0x8022

// Model Object Content was ambiguous
#define NMR_ERROR_AMBIGUOUSOBJECTDEFINITON 0x8023

// Model Vertex is missing a coordinate
#define NMR_ERROR_MODELCOORDINATEMISSING 0x8024

// Invalid Model Coordinates
#define NMR_ERROR_INVALIDMODELCOORDINATES 0x8025

// Invalid Model Coordinate Indices
#define NMR_ERROR_INVALIDMODELCOORDINATEINDICES 0x8026

// XML Node Name is empty
#define NMR_ERROR_NODENAMEISEMPTY 0x8027

// Invalid model node index
#define NMR_ERROR_INVALIDMODELNODEINDEX 0x8028

// Could not create OPC Package
#define NMR_ERROR_OPCPACKAGECREATEFAILED 0x8029

// Could not write OPC Package to Stream
#define NMR_ERROR_COULDNOTWRITEOPCPACKAGETOSTREAM 0x802A

// Could not create OPC Part URI
#define NMR_ERROR_COULDNOTCREATEOPCPARTURI 0x802B

// Could not create OPC Part
#define NMR_ERROR_COULDNOTCREATEOPCPART 0x802C

// Could not get OPC Content Stream
#define NMR_ERROR_OPCCOULDNOTGETCONTENTSTREAM 0x802D

// Could not resize OPC Stream
#define NMR_ERROR_OPCCOULDNOTRESIZESTREAM 0x802E

// Could not seek in OPC Stream
#define NMR_ERROR_OPCCOULDNOTSEEKSTREAM 0x802F

// Could not copy OPC Stream
#define NMR_ERROR_OPCCOULDNOTCOPYSTREAM 0x8030

// Could not retrieve OPC Part name
#define NMR_ERROR_COULDNOTRETRIEVEOPCPARTNAME 0x8031

// Could not create OPC Relationship
#define NMR_ERROR_COULDNOTCREATEOPCRELATIONSHIP 0x8032

// Could not create XML Writer
#define NMR_ERROR_COULDNOTCREATEXMLWRITER 0x8033

// Could not set XML Output stream
#define NMR_ERROR_COULDNOTSETXMLOUTPUT 0x8034

// Could not set XML Property
#define NMR_ERROR_COULDNOTSETXMLPROPERTY 0x8035

// Could not write XML Start Document
#define NMR_ERROR_COULDNOTWRITEXMLSTARTDOCUMENT 0x8036

// Could not write XML End Document
#define NMR_ERROR_COULDNOTWRITEXMLENDDOCUMENT 0x8037

// Could not flush XML Writer
#define NMR_ERROR_COULDNOTFLUSHXMLWRITER 0x8038

// Could not write XML Start Element
#define NMR_ERROR_COULDNOTWRITEXMLSTARTELEMENT 0x8039

// Could not write XML End Element
#define NMR_ERROR_COULDNOTWRITEXMLENDELEMENT 0x803A

// Could not write XML Attribute String
#define NMR_ERROR_COULDNOTWRITEXMLATTRIBUTE 0x803B

// Build item Object ID was not specified
#define NMR_ERROR_MISSINGBUILDITEMOBJECTID 0x803C

// Build item Object ID is ambiguous
#define NMR_ERROR_DUPLICATEBUILDITEMOBJECTID 0x803D

// Build item Object ID is invalid
#define NMR_ERROR_INVALIDBUILDITEMOBJECTID 0x803E

// Could not find Object associated to the Build item
#define NMR_ERROR_COULDNOTFINDBUILDITEMOBJECT 0x803F

// Could not find Object associated to Component
#define NMR_ERROR_COULDNOTFINDCOMPONENTOBJECT 0x8040

// Component Object ID is ambiguous
#define NMR_ERROR_DUPLICATECOMPONENTOBJECTID 0x8041

// Texture ID was not specified
#define NMR_ERROR_MISSINGMODELTEXTUREID 0x8042

// An object has no supported content type
#define NMR_ERROR_MISSINGOBJECTCONTENT 0x8043

// Invalid model reader object
#define NMR_ERROR_INVALIDREADEROBJECT 0x8044

// Invalid model writer object
#define NMR_ERROR_INVALIDWRITEROBJECT 0x8045

// Unknown model resource
#define NMR_ERROR_UNKNOWNMODELRESOURCE 0x8046

// Invalid stream type
#define NMR_ERROR_INVALIDSTREAMTYPE 0x8047

// Duplicate Material ID
#define NMR_ERROR_DUPLICATEMATERIALID 0x8048

// Duplicate Wallthickness
#define NMR_ERROR_DUPLICATEWALLTHICKNESS 0x8049

// Duplicate Fit
#define NMR_ERROR_DUPLICATEFIT 0x804A

// Duplicate Object Type
#define NMR_ERROR_DUPLICATEOBJECTTYPE 0x804B

// Invalid model texture coordinates
#define NMR_ERROR_INVALIDMODELTEXTURECOORDINATES 0x804C

// Texture coordinates missing
#define NMR_ERROR_MODELTEXTURECOORDINATEMISSING 0x804D

// Too many values in color string
#define NMR_ERROR_TOOMANYVALUESINCOLORSTRING 0x804E

// Invalid value in color string
#define NMR_ERROR_INVALIDVALUEINCOLORSTRING 0x804F

// Duplicate node color value
#define NMR_ERROR_DUPLICATECOLORVALUE 0x8050

// Missing model color ID
#define NMR_ERROR_MISSINGMODELCOLORID 0x8051

// Missing model material ID
#define NMR_ERROR_MISSINGMODELMATERIALID 0x8052

// Duplicate model resource
#define NMR_ERROR_DUPLICATEMODELRESOURCE 0x8053

// Metadata exceeds 2^31 elements
#define NMR_ERROR_INVALIDMETADATACOUNT 0x8054

// Resource type has wrong class
#define NMR_ERROR_RESOURCETYPEMISMATCH 0x8055

// Resources exceed 2^31 elements
#define NMR_ERROR_INVALIDRESOURCECOUNT 0x8056

// Build items exceed 2^31 elements
#define NMR_ERROR_INVALIDBUILDITEMCOUNT 0x8057

// No Build Item has been given
#define NMR_ERROR_INVALIDBUILDITEM 0x8058

// No Object has been given
#define NMR_ERROR_INVALIDOBJECT 0x8059

// No Model has been given
#define NMR_ERROR_INVALIDMODEL 0x805A

// No Model Resource has been given
#define NMR_ERROR_INVALIDMODELRESOURCE 0x805B

// Duplicate Model Metadata
#define NMR_ERROR_DUPLICATEMETADATA 0x805C

// Invalid Model Metadata
#define NMR_ERROR_INVALIDMETADATA 0x805D

// Invalid Model Component
#define NMR_ERROR_INVALIDMODELCOMPONENT 0x805E

// Invalid Model Object Type
#define NMR_ERROR_INVALIDMODELOBJECTTYPE 0x805F

// Missing Model Resource ID
#define NMR_ERROR_MISSINGMODELRESOURCEID 0x8060

// Duplicate Resource ID
#define NMR_ERROR_DUPLICATERESOURCEID 0x8061

// Could not write XML Content
#define NMR_ERROR_COULDNOTWRITEXMLCONTENT 0x8062

// Could not get XML Namespace
#define NMR_ERROR_COULDNOTGETNAMESPACE 0x8063

// Handle overflow
#define NMR_ERROR_HANDLEOVERFLOW 0x8064

// No resources in model file
#define NMR_ERROR_NORESOURCES 0x8065

// No build section in model file
#define NMR_ERROR_NOBUILD 0x8066

// Duplicate resources section in model file
#define NMR_ERROR_DUPLICATERESOURCES 0x8067

// Duplicate build section in model file
#define NMR_ERROR_DUPLICATEBUILDSECTION 0x8068

// Duplicate model node in XML Stream
#define NMR_ERROR_DUPLICATEMODELNODE 0x8069

// No model node in XML Stream
#define NMR_ERROR_NOMODELNODE 0x806A

// Resource not found
#define NMR_ERROR_RESOURCENOTFOUND 0x806B

// Unknown reader class
#define NMR_ERROR_UNKNOWNREADERCLASS 0x806C

// Unknown writer class
#define NMR_ERROR_UNKNOWNWRITERCLASS 0x806D

// Texture not found
#define NMR_ERROR_MODELTEXTURENOTFOUND 0x806E

// Invalid Content Type
#define NMR_ERROR_INVALIDCONTENTTYPE 0x806F

// Invalid Base Material
#define NMR_ERROR_INVALIDBASEMATERIAL 0x8070

// Too many materials
#define NMR_ERROR_TOOMANYMATERIALS 0x8071

// Invalid texture
#define NMR_ERROR_INVALIDTEXTURE 0x8072

// Could not get handle
#define NMR_ERROR_COULDNOTGETHANDLE 0x8073

// Build item not found
#define NMR_ERROR_BUILDITEMNOTFOUND 0x8074
// Could not get texture URI
#define NMR_ERROR_OPCCOULDNOTGETTEXTUREURI 0x8075

// Could not get texture stream
#define NMR_ERROR_OPCCOULDNOTGETTEXTURESTREAM 0x8076

// Model Relationship read failed
#define NMR_ERROR_MODELRELATIONSHIPSETREADFAILED 0x8077

// No texture stream available
#define NMR_ERROR_NOTEXTURESTREAM 0x8078

// Could not create stream
#define NMR_ERROR_COULDNOTCREATESTREAM 0x8079

// Not supporting legacy CMYK color
#define NMR_ERROR_NOTSUPPORTINGLEGACYCMYK 0x807A

// Invalid Texture Reference
#define NMR_ERROR_INVALIDTEXTUREREFERENCE 0x807B

// Invalid Texture ID
#define NMR_ERROR_INVALIDTEXTUREID 0x807C

#endif // __NMR_ERRORCONST
