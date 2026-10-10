
void __fastcall FUN_00405d70(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *local_c;
  
  FUN_0064e7d0();
  FUN_0064e7d0(s_AnimSpeeds__0071d4dc);
  local_c = (float *)(param_1 + 0x154);
  iVar4 = 0;
  while( true ) {
    uVar1 = (*(int **)(param_1 + 8))[1];
    uVar2 = uVar1 * 2;
    if (((uVar2 ^ uVar1) & 0x7fffffff ^ uVar2) == 0xffffffff) {
      iVar3 = **(int **)(param_1 + 8);
    }
    else {
      iVar3 = FUN_00549470();
    }
    if (*(int *)(iVar3 + 0x54) <= iVar4) break;
    FUN_0064e7d0(s_m_AnimSpeeds__i_____5_2ff__0071d4bc,iVar4,(double)*local_c);
    iVar4 = iVar4 + 1;
    local_c = local_c + 1;
  }
  FUN_0064e7d0();
  return;
}

