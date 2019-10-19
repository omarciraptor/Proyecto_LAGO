
//
#include "G4UserRunAction.hh"

#ifndef LXeRunAction_h
#define LXeRunAction_h 1

class LXeRun;
class LXeHistoManager;
class G4Run;

class LXeRunAction : public G4UserRunAction
{
  public:

    LXeRunAction();
    virtual ~LXeRunAction();

    virtual G4Run* GenerateRun();
    virtual void BeginOfRunAction(const G4Run*);
    virtual void EndOfRunAction(const G4Run*);

  private:

    LXeRun*          fRun;
    LXeHistoManager* fHistoManager;
};

#endif
