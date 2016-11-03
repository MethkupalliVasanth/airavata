/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef experiment_model_TYPES_H
#define experiment_model_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "airavata_commons_types.h"
#include "application_io_models_types.h"
#include "scheduling_model_types.h"
#include "status_models_types.h"
#include "process_model_types.h"


namespace apache { namespace airavata { namespace model { namespace experiment {

struct ExperimentType {
  enum type {
    SINGLE_APPLICATION = 0,
    WORKFLOW = 1
  };
};

extern const std::map<int, const char*> _ExperimentType_VALUES_TO_NAMES;

struct ExperimentSearchFields {
  enum type {
    EXPERIMENT_NAME = 0,
    EXPERIMENT_DESC = 1,
    APPLICATION_ID = 2,
    FROM_DATE = 3,
    TO_DATE = 4,
    STATUS = 5,
    PROJECT_ID = 6
  };
};

extern const std::map<int, const char*> _ExperimentSearchFields_VALUES_TO_NAMES;

struct ProjectSearchFields {
  enum type {
    PROJECT_NAME = 0,
    PROJECT_DESCRIPTION = 1
  };
};

extern const std::map<int, const char*> _ProjectSearchFields_VALUES_TO_NAMES;

class UserConfigurationDataModel;

class ExperimentModel;

class ExperimentSummaryModel;

class ExperimentStatistics;

typedef struct _UserConfigurationDataModel__isset {
  _UserConfigurationDataModel__isset() : shareExperimentPublicly(true), computationalResourceScheduling(false), throttleResources(true), userDN(false), generateCert(true), storageId(false), experimentDataDir(false), useUserCRPref(false) {}
  bool shareExperimentPublicly :1;
  bool computationalResourceScheduling :1;
  bool throttleResources :1;
  bool userDN :1;
  bool generateCert :1;
  bool storageId :1;
  bool experimentDataDir :1;
  bool useUserCRPref :1;
} _UserConfigurationDataModel__isset;

class UserConfigurationDataModel {
 public:

  UserConfigurationDataModel(const UserConfigurationDataModel&);
  UserConfigurationDataModel& operator=(const UserConfigurationDataModel&);
  UserConfigurationDataModel() : airavataAutoSchedule(false), overrideManualScheduledParams(false), shareExperimentPublicly(false), throttleResources(false), userDN(), generateCert(false), storageId(), experimentDataDir(), useUserCRPref(0) {
  }

  virtual ~UserConfigurationDataModel() throw();
  bool airavataAutoSchedule;
  bool overrideManualScheduledParams;
  bool shareExperimentPublicly;
   ::apache::airavata::model::scheduling::ComputationalResourceSchedulingModel computationalResourceScheduling;
  bool throttleResources;
  std::string userDN;
  bool generateCert;
  std::string storageId;
  std::string experimentDataDir;
  bool useUserCRPref;

  _UserConfigurationDataModel__isset __isset;

  void __set_airavataAutoSchedule(const bool val);

  void __set_overrideManualScheduledParams(const bool val);

  void __set_shareExperimentPublicly(const bool val);

  void __set_computationalResourceScheduling(const  ::apache::airavata::model::scheduling::ComputationalResourceSchedulingModel& val);

  void __set_throttleResources(const bool val);

  void __set_userDN(const std::string& val);

  void __set_generateCert(const bool val);

  void __set_storageId(const std::string& val);

  void __set_experimentDataDir(const std::string& val);

  void __set_useUserCRPref(const bool val);

  bool operator == (const UserConfigurationDataModel & rhs) const
  {
    if (!(airavataAutoSchedule == rhs.airavataAutoSchedule))
      return false;
    if (!(overrideManualScheduledParams == rhs.overrideManualScheduledParams))
      return false;
    if (__isset.shareExperimentPublicly != rhs.__isset.shareExperimentPublicly)
      return false;
    else if (__isset.shareExperimentPublicly && !(shareExperimentPublicly == rhs.shareExperimentPublicly))
      return false;
    if (__isset.computationalResourceScheduling != rhs.__isset.computationalResourceScheduling)
      return false;
    else if (__isset.computationalResourceScheduling && !(computationalResourceScheduling == rhs.computationalResourceScheduling))
      return false;
    if (__isset.throttleResources != rhs.__isset.throttleResources)
      return false;
    else if (__isset.throttleResources && !(throttleResources == rhs.throttleResources))
      return false;
    if (__isset.userDN != rhs.__isset.userDN)
      return false;
    else if (__isset.userDN && !(userDN == rhs.userDN))
      return false;
    if (__isset.generateCert != rhs.__isset.generateCert)
      return false;
    else if (__isset.generateCert && !(generateCert == rhs.generateCert))
      return false;
    if (__isset.storageId != rhs.__isset.storageId)
      return false;
    else if (__isset.storageId && !(storageId == rhs.storageId))
      return false;
    if (__isset.experimentDataDir != rhs.__isset.experimentDataDir)
      return false;
    else if (__isset.experimentDataDir && !(experimentDataDir == rhs.experimentDataDir))
      return false;
    if (__isset.useUserCRPref != rhs.__isset.useUserCRPref)
      return false;
    else if (__isset.useUserCRPref && !(useUserCRPref == rhs.useUserCRPref))
      return false;
    return true;
  }
  bool operator != (const UserConfigurationDataModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserConfigurationDataModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(UserConfigurationDataModel &a, UserConfigurationDataModel &b);

inline std::ostream& operator<<(std::ostream& out, const UserConfigurationDataModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ExperimentModel__isset {
  _ExperimentModel__isset() : creationTime(false), description(false), executionId(false), gatewayExecutionId(false), gatewayInstanceId(false), enableEmailNotification(false), emailAddresses(false), userConfigurationData(false), experimentInputs(false), experimentOutputs(false), experimentStatus(false), errors(false), processes(false) {}
  bool creationTime :1;
  bool description :1;
  bool executionId :1;
  bool gatewayExecutionId :1;
  bool gatewayInstanceId :1;
  bool enableEmailNotification :1;
  bool emailAddresses :1;
  bool userConfigurationData :1;
  bool experimentInputs :1;
  bool experimentOutputs :1;
  bool experimentStatus :1;
  bool errors :1;
  bool processes :1;
} _ExperimentModel__isset;

class ExperimentModel {
 public:

  ExperimentModel(const ExperimentModel&);
  ExperimentModel& operator=(const ExperimentModel&);
  ExperimentModel() : experimentId("DO_NOT_SET_AT_CLIENTS"), projectId(), gatewayId(), experimentType((ExperimentType::type)0), userName(), experimentName(), creationTime(0), description(), executionId(), gatewayExecutionId(), gatewayInstanceId(), enableEmailNotification(0) {
    experimentType = (ExperimentType::type)0;

  }

  virtual ~ExperimentModel() throw();
  std::string experimentId;
  std::string projectId;
  std::string gatewayId;
  ExperimentType::type experimentType;
  std::string userName;
  std::string experimentName;
  int64_t creationTime;
  std::string description;
  std::string executionId;
  std::string gatewayExecutionId;
  std::string gatewayInstanceId;
  bool enableEmailNotification;
  std::vector<std::string>  emailAddresses;
  UserConfigurationDataModel userConfigurationData;
  std::vector< ::apache::airavata::model::application::io::InputDataObjectType>  experimentInputs;
  std::vector< ::apache::airavata::model::application::io::OutputDataObjectType>  experimentOutputs;
  std::vector< ::apache::airavata::model::status::ExperimentStatus>  experimentStatus;
  std::vector< ::apache::airavata::model::commons::ErrorModel>  errors;
  std::vector< ::apache::airavata::model::process::ProcessModel>  processes;

  _ExperimentModel__isset __isset;

  void __set_experimentId(const std::string& val);

  void __set_projectId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_experimentType(const ExperimentType::type val);

  void __set_userName(const std::string& val);

  void __set_experimentName(const std::string& val);

  void __set_creationTime(const int64_t val);

  void __set_description(const std::string& val);

  void __set_executionId(const std::string& val);

  void __set_gatewayExecutionId(const std::string& val);

  void __set_gatewayInstanceId(const std::string& val);

  void __set_enableEmailNotification(const bool val);

  void __set_emailAddresses(const std::vector<std::string> & val);

  void __set_userConfigurationData(const UserConfigurationDataModel& val);

  void __set_experimentInputs(const std::vector< ::apache::airavata::model::application::io::InputDataObjectType> & val);

  void __set_experimentOutputs(const std::vector< ::apache::airavata::model::application::io::OutputDataObjectType> & val);

  void __set_experimentStatus(const std::vector< ::apache::airavata::model::status::ExperimentStatus> & val);

  void __set_errors(const std::vector< ::apache::airavata::model::commons::ErrorModel> & val);

  void __set_processes(const std::vector< ::apache::airavata::model::process::ProcessModel> & val);

  bool operator == (const ExperimentModel & rhs) const
  {
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(projectId == rhs.projectId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    if (!(experimentType == rhs.experimentType))
      return false;
    if (!(userName == rhs.userName))
      return false;
    if (!(experimentName == rhs.experimentName))
      return false;
    if (__isset.creationTime != rhs.__isset.creationTime)
      return false;
    else if (__isset.creationTime && !(creationTime == rhs.creationTime))
      return false;
    if (__isset.description != rhs.__isset.description)
      return false;
    else if (__isset.description && !(description == rhs.description))
      return false;
    if (__isset.executionId != rhs.__isset.executionId)
      return false;
    else if (__isset.executionId && !(executionId == rhs.executionId))
      return false;
    if (__isset.gatewayExecutionId != rhs.__isset.gatewayExecutionId)
      return false;
    else if (__isset.gatewayExecutionId && !(gatewayExecutionId == rhs.gatewayExecutionId))
      return false;
    if (__isset.gatewayInstanceId != rhs.__isset.gatewayInstanceId)
      return false;
    else if (__isset.gatewayInstanceId && !(gatewayInstanceId == rhs.gatewayInstanceId))
      return false;
    if (__isset.enableEmailNotification != rhs.__isset.enableEmailNotification)
      return false;
    else if (__isset.enableEmailNotification && !(enableEmailNotification == rhs.enableEmailNotification))
      return false;
    if (__isset.emailAddresses != rhs.__isset.emailAddresses)
      return false;
    else if (__isset.emailAddresses && !(emailAddresses == rhs.emailAddresses))
      return false;
    if (__isset.userConfigurationData != rhs.__isset.userConfigurationData)
      return false;
    else if (__isset.userConfigurationData && !(userConfigurationData == rhs.userConfigurationData))
      return false;
    if (__isset.experimentInputs != rhs.__isset.experimentInputs)
      return false;
    else if (__isset.experimentInputs && !(experimentInputs == rhs.experimentInputs))
      return false;
    if (__isset.experimentOutputs != rhs.__isset.experimentOutputs)
      return false;
    else if (__isset.experimentOutputs && !(experimentOutputs == rhs.experimentOutputs))
      return false;
    if (__isset.experimentStatus != rhs.__isset.experimentStatus)
      return false;
    else if (__isset.experimentStatus && !(experimentStatus == rhs.experimentStatus))
      return false;
    if (__isset.errors != rhs.__isset.errors)
      return false;
    else if (__isset.errors && !(errors == rhs.errors))
      return false;
    if (__isset.processes != rhs.__isset.processes)
      return false;
    else if (__isset.processes && !(processes == rhs.processes))
      return false;
    return true;
  }
  bool operator != (const ExperimentModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExperimentModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ExperimentModel &a, ExperimentModel &b);

inline std::ostream& operator<<(std::ostream& out, const ExperimentModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ExperimentSummaryModel__isset {
  _ExperimentSummaryModel__isset() : creationTime(false), description(false), executionId(false), resourceHostId(false), experimentStatus(false), statusUpdateTime(false) {}
  bool creationTime :1;
  bool description :1;
  bool executionId :1;
  bool resourceHostId :1;
  bool experimentStatus :1;
  bool statusUpdateTime :1;
} _ExperimentSummaryModel__isset;

class ExperimentSummaryModel {
 public:

  ExperimentSummaryModel(const ExperimentSummaryModel&);
  ExperimentSummaryModel& operator=(const ExperimentSummaryModel&);
  ExperimentSummaryModel() : experimentId(), projectId(), gatewayId(), creationTime(0), userName(), name(), description(), executionId(), resourceHostId(), experimentStatus(), statusUpdateTime(0) {
  }

  virtual ~ExperimentSummaryModel() throw();
  std::string experimentId;
  std::string projectId;
  std::string gatewayId;
  int64_t creationTime;
  std::string userName;
  std::string name;
  std::string description;
  std::string executionId;
  std::string resourceHostId;
  std::string experimentStatus;
  int64_t statusUpdateTime;

  _ExperimentSummaryModel__isset __isset;

  void __set_experimentId(const std::string& val);

  void __set_projectId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_creationTime(const int64_t val);

  void __set_userName(const std::string& val);

  void __set_name(const std::string& val);

  void __set_description(const std::string& val);

  void __set_executionId(const std::string& val);

  void __set_resourceHostId(const std::string& val);

  void __set_experimentStatus(const std::string& val);

  void __set_statusUpdateTime(const int64_t val);

  bool operator == (const ExperimentSummaryModel & rhs) const
  {
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(projectId == rhs.projectId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    if (__isset.creationTime != rhs.__isset.creationTime)
      return false;
    else if (__isset.creationTime && !(creationTime == rhs.creationTime))
      return false;
    if (!(userName == rhs.userName))
      return false;
    if (!(name == rhs.name))
      return false;
    if (__isset.description != rhs.__isset.description)
      return false;
    else if (__isset.description && !(description == rhs.description))
      return false;
    if (__isset.executionId != rhs.__isset.executionId)
      return false;
    else if (__isset.executionId && !(executionId == rhs.executionId))
      return false;
    if (__isset.resourceHostId != rhs.__isset.resourceHostId)
      return false;
    else if (__isset.resourceHostId && !(resourceHostId == rhs.resourceHostId))
      return false;
    if (__isset.experimentStatus != rhs.__isset.experimentStatus)
      return false;
    else if (__isset.experimentStatus && !(experimentStatus == rhs.experimentStatus))
      return false;
    if (__isset.statusUpdateTime != rhs.__isset.statusUpdateTime)
      return false;
    else if (__isset.statusUpdateTime && !(statusUpdateTime == rhs.statusUpdateTime))
      return false;
    return true;
  }
  bool operator != (const ExperimentSummaryModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExperimentSummaryModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ExperimentSummaryModel &a, ExperimentSummaryModel &b);

inline std::ostream& operator<<(std::ostream& out, const ExperimentSummaryModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ExperimentStatistics__isset {
  _ExperimentStatistics__isset() : cancelledExperimentCount(false), completedExperiments(false), failedExperiments(false), cancelledExperiments(false), createdExperiments(false), runningExperiments(false) {}
  bool cancelledExperimentCount :1;
  bool completedExperiments :1;
  bool failedExperiments :1;
  bool cancelledExperiments :1;
  bool createdExperiments :1;
  bool runningExperiments :1;
} _ExperimentStatistics__isset;

class ExperimentStatistics {
 public:

  ExperimentStatistics(const ExperimentStatistics&);
  ExperimentStatistics& operator=(const ExperimentStatistics&);
  ExperimentStatistics() : allExperimentCount(0), completedExperimentCount(0), cancelledExperimentCount(0), failedExperimentCount(0), createdExperimentCount(0), runningExperimentCount(0) {
  }

  virtual ~ExperimentStatistics() throw();
  int32_t allExperimentCount;
  int32_t completedExperimentCount;
  int32_t cancelledExperimentCount;
  int32_t failedExperimentCount;
  int32_t createdExperimentCount;
  int32_t runningExperimentCount;
  std::vector<ExperimentSummaryModel>  allExperiments;
  std::vector<ExperimentSummaryModel>  completedExperiments;
  std::vector<ExperimentSummaryModel>  failedExperiments;
  std::vector<ExperimentSummaryModel>  cancelledExperiments;
  std::vector<ExperimentSummaryModel>  createdExperiments;
  std::vector<ExperimentSummaryModel>  runningExperiments;

  _ExperimentStatistics__isset __isset;

  void __set_allExperimentCount(const int32_t val);

  void __set_completedExperimentCount(const int32_t val);

  void __set_cancelledExperimentCount(const int32_t val);

  void __set_failedExperimentCount(const int32_t val);

  void __set_createdExperimentCount(const int32_t val);

  void __set_runningExperimentCount(const int32_t val);

  void __set_allExperiments(const std::vector<ExperimentSummaryModel> & val);

  void __set_completedExperiments(const std::vector<ExperimentSummaryModel> & val);

  void __set_failedExperiments(const std::vector<ExperimentSummaryModel> & val);

  void __set_cancelledExperiments(const std::vector<ExperimentSummaryModel> & val);

  void __set_createdExperiments(const std::vector<ExperimentSummaryModel> & val);

  void __set_runningExperiments(const std::vector<ExperimentSummaryModel> & val);

  bool operator == (const ExperimentStatistics & rhs) const
  {
    if (!(allExperimentCount == rhs.allExperimentCount))
      return false;
    if (!(completedExperimentCount == rhs.completedExperimentCount))
      return false;
    if (__isset.cancelledExperimentCount != rhs.__isset.cancelledExperimentCount)
      return false;
    else if (__isset.cancelledExperimentCount && !(cancelledExperimentCount == rhs.cancelledExperimentCount))
      return false;
    if (!(failedExperimentCount == rhs.failedExperimentCount))
      return false;
    if (!(createdExperimentCount == rhs.createdExperimentCount))
      return false;
    if (!(runningExperimentCount == rhs.runningExperimentCount))
      return false;
    if (!(allExperiments == rhs.allExperiments))
      return false;
    if (__isset.completedExperiments != rhs.__isset.completedExperiments)
      return false;
    else if (__isset.completedExperiments && !(completedExperiments == rhs.completedExperiments))
      return false;
    if (__isset.failedExperiments != rhs.__isset.failedExperiments)
      return false;
    else if (__isset.failedExperiments && !(failedExperiments == rhs.failedExperiments))
      return false;
    if (__isset.cancelledExperiments != rhs.__isset.cancelledExperiments)
      return false;
    else if (__isset.cancelledExperiments && !(cancelledExperiments == rhs.cancelledExperiments))
      return false;
    if (__isset.createdExperiments != rhs.__isset.createdExperiments)
      return false;
    else if (__isset.createdExperiments && !(createdExperiments == rhs.createdExperiments))
      return false;
    if (__isset.runningExperiments != rhs.__isset.runningExperiments)
      return false;
    else if (__isset.runningExperiments && !(runningExperiments == rhs.runningExperiments))
      return false;
    return true;
  }
  bool operator != (const ExperimentStatistics &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExperimentStatistics & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ExperimentStatistics &a, ExperimentStatistics &b);

inline std::ostream& operator<<(std::ostream& out, const ExperimentStatistics& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
