#ifndef MODULATOR_H_
#define MODULATOR_H_

enum ModulationType {
  AM,
  FM,
  PM,
  NUM_MODTYPE_VALUES
};

class Modulator {
 private:
  ModulationType currentType;
  float AMModulate(float signal1, float signal2) { return signal1 + signal2; }

  float FMModulate(float signal1, float signal2) { return signal1 + signal2; }

  float PMModulate(float signal1, float signal2) { return signal1 + signal2; }

 public:
  float ModulateSignals(float signal1, float signal2) {
    switch(s_param.modType){
    case AM:
      return AMModulate(signal1, signal2);
    case FM:
      return FMModulate(signal1, signal2);
    case PM:
      return PMModulate(signal1, signal2);
    }
  } 

  void SetModulationType(ModulationType type){
    this->currentType = type;
  }

  ModulationType GetModulationType(){
    return this->modulationType;
  }
};
#endif // MODULATOR_H_
