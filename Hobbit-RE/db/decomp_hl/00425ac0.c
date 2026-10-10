
void FUN_00425ac0(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 8) {
    FUN_00659600(s_EelBite_00720a10,1);
    return;
  }
  if ((param_1 == 0x10) || (pcVar1 = s_EnemyBladeImpactFlesh_007209f8, param_1 == 0x11)) {
    pcVar1 = s_BilboFlinchVox_00720998;
  }
  FUN_00659600(pcVar1,1);
  return;
}

