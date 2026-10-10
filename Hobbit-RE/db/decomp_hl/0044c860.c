
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044c860(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  
  if ((_DAT_006ec104 < (float)param_1[0x247]) &&
     ((((iVar2 = param_1[0x235], iVar2 == 6 || (iVar2 == 0x17)) || (iVar2 == 5)) ||
      ((iVar2 == 0xf || (iVar2 == 0x13)))))) {
    FUN_0044ca80();
    return;
  }
  fVar1 = (float)param_1[0x17d7];
  param_1[0x17d7] = (int)((float)param_1[0x248] + fVar1);
  if (_DAT_006e999c < (float)param_1[0x248] + fVar1) {
    param_1[0x17d7] = 0;
  }
  if (param_1[0x1d2] == 2) {
    switch(param_1[0x235]) {
    case 2:
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x13:
    case 0x17:
    case 0x1a:
    case 0x1b:
      break;
    default:
      if ((((param_1[0x1d8] != 0) && (param_1[0x2a] != 0 || param_1[0x2b] != 0)) &&
          ((_DAT_006ebfd0 < (float)param_1[0x2e] &&
           (((DAT_006e92e8 < (float)param_1[0x1d4] && (DAT_006e92e4 <= (float)param_1[0x1d6])) &&
            (param_1[0x133a] == 0)))))) && (param_1[0x231] == 0)) {
        pfVar8 = (float *)(**(code **)(*param_1 + 0x28))();
        fVar1 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar5 = fVar1 - (float)param_1[0x17d1];
        fVar4 = pfVar8[2];
        fVar7 = fVar3 - (float)param_1[0x17d2];
        fVar6 = fVar4 - (float)param_1[0x17d3];
        if (_DAT_006ec100 < fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) {
          param_1[0x17d7] = 0;
          param_1[0x17d1] = (int)fVar1;
          param_1[0x17d2] = (int)fVar3;
          param_1[0x17d3] = (int)fVar4;
          if (_DAT_006e9334 <
              ((float)param_1[0x17d1] - (float)param_1[0x17d4]) *
              ((float)param_1[0x17d1] - (float)param_1[0x17d4]) +
              ((float)param_1[0x17d3] - (float)param_1[0x17d6]) *
              ((float)param_1[0x17d3] - (float)param_1[0x17d6])) {
            param_1[0x17d4] = param_1[0x17d1];
            param_1[0x17d5] = param_1[0x17d2];
            param_1[0x17d6] = param_1[0x17d3];
            return;
          }
        }
      }
    }
  }
  return;
}

