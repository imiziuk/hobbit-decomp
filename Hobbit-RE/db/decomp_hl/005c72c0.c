
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c72c0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  DWORD DVar5;
  uint uVar6;
  
  _DAT_007baafc = 1;
  iVar2 = FUN_006c15ce(s_USERNAME_00746274);
  if (iVar2 == 0) {
    uVar4 = FUN_006c1556();
    puVar1 = PTR_s_bcdfghjklmnprstw_007461e8;
    iVar2 = 0;
    do {
      uVar6 = uVar4 & 0xf;
      uVar4 = (int)uVar4 >> 4;
      (&DAT_007baadc)[iVar2] = puVar1[uVar6];
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    DAT_007baae1 = 0;
  }
  else {
    uVar3 = FUN_006c15ce(s_USERNAME_00746274);
    FUN_00647d10(&DAT_007baadc,uVar3);
  }
  DAT_007baaf0 = 0;
  DAT_007baaf4 = 0;
  DAT_007baaf8 = 0;
  _DAT_007baad8 = 0;
  DAT_007baac8 = 0;
  FUN_005c74c0();
  DAT_007baac8 = FUN_005c73e0(&DAT_007baadc);
  FUN_005c7480(DAT_007baac8,&DAT_007baad0);
  DVar5 = GetCurrentProcessId();
  DAT_007baacc = (int)DVar5 >> 6 & 0x3fU ^ DVar5 & 0x3f;
  FUN_0064e7d0(s_____________________________00746254);
  FUN_0064e7d0(s_______GUID_Initialize_______00746234);
  FUN_0064e7d0(s_____________________________00746254);
  FUN_0064e7d0(s_PID___1d_00746220,DAT_007baacc);
  FUN_0064e7d0(s_USERNAME___s_00746210,&DAT_007baadc);
  FUN_0064e7d0(s_USERID___s_00746200,&DAT_007baad0);
  FUN_0064e7d0(s_____________________________00746254);
  return;
}

