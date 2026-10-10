
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5ac0(undefined4 *param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_4;
  
  local_c = DAT_0075db9c;
  local_4 = DAT_0075dba4;
  if (6 < param_3) {
    param_3 = 6;
  }
  fVar1 = _DAT_0075dba0;
  switch(param_3) {
  case 1:
    goto switchD_004d5af9_default;
  case 2:
    puVar2 = &DAT_0075db9c + (param_2 % 6) * 3;
    break;
  case 3:
    puVar2 = (undefined4 *)(&DAT_0075dbb4 + (param_2 % 6) * 0xc);
    break;
  case 4:
    puVar2 = (undefined4 *)(&DAT_0075dbd8 + (param_2 % 6) * 0xc);
    break;
  case 5:
    puVar2 = (undefined4 *)(&DAT_0075dc08 + (param_2 % 6) * 0xc);
    break;
  case 6:
    puVar2 = (undefined4 *)(&DAT_0075dc48 + (param_2 % 6) * 0xc);
    break;
  default:
    goto switchD_004d5af9_default;
  }
  local_c = *puVar2;
  local_4 = puVar2[2];
  fVar1 = (float)puVar2[1];
switchD_004d5af9_default:
  if (5 < param_2) {
    fVar1 = fVar1 + _DAT_006e9364;
  }
  *param_1 = local_c;
  param_1[2] = local_4;
  param_1[1] = fVar1;
  return;
}

