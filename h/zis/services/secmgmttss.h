

/*
  This program and the accompanying materials are
  made available under the terms of the Eclipse Public License v2.0 which accompanies
  this distribution, and is available at https://www.eclipse.org/legal/epl-v20.html

  SPDX-License-Identifier: EPL-2.0

  Copyright Contributors to the Zowe Project.
*/

#ifndef ZIS_SERVICES_SECMGMTTSS_H_
#define ZIS_SERVICES_SECMGMTTSS_H_

int zisUserProfilesServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                      CrossMemoryService *service, void *parm);
                                      
int zisGroupProfilesServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                       CrossMemoryService *service, void *parm);
                                      
int zisGenresProfilesServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                        CrossMemoryService *service, void *parm);
                                        
int zisGenresAccessListServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                          CrossMemoryService *service, void *parm);
                                          
int zisGroupAccessListServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                         CrossMemoryService *service, void *parm);
                                        
int zisGroupAdminServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                    CrossMemoryService *service, void *parm);
                                    
int zisGenresProfileAdminServiceFunctionTSS(CrossMemoryServerGlobalArea *globalArea,
                                            CrossMemoryService *service, void *parm);
                                      
#endif

/*
  This program and the accompanying materials are
  made available under the terms of the Eclipse Public License v2.0 which accompanies
  this distribution, and is available at https://www.eclipse.org/legal/epl-v20.html

  SPDX-License-Identifier: EPL-2.0

  Copyright Contributors to the Zowe Project.
*/
