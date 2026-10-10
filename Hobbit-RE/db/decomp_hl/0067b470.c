
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067b470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  iVar1 = DirectSoundCreate8(0,&DAT_00806ba0,0);
  if (iVar1 != 0) {
    FUN_0064e7d0(s_Failed_to_create_DirectSound___0_00752ddc,iVar1);
    return;
  }
  iVar1 = *DAT_00806ba0;
  uVar2 = FUN_006605b0(3);
  iVar1 = (**(code **)(iVar1 + 0x18))(DAT_00806ba0,uVar2);
  if (iVar1 == 0) {
    DAT_00806a64 = FUN_0067b580();
    _DAT_00806b40 = 0x60;
    (**(code **)(*DAT_00806ba0 + 0x10))(DAT_00806ba0,&DAT_00806b40);
    if (DAT_00806b54 < 0x10) {
      DAT_00806a60 = 0x10;
    }
    else {
      DAT_00806a60 = DAT_00806b54;
      if (0x40 < DAT_00806b54) {
        DAT_00806a60 = 0x40;
      }
    }
    *(undefined2 **)(param_1 + 0xc) = &DAT_00806ba8;
    *(int *)(param_1 + 0x10) = DAT_00806a60 * 0x88 + 0x806b20;
    _DAT_00808dac = 1;
    uVar3 = *(uint *)(param_1 + 0xc);
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      do {
        *(undefined4 *)(uVar3 + 0x78) = 0;
        *(undefined4 *)(uVar3 + 0x7c) = 0;
        *(undefined4 *)(uVar3 + 0x80) = 0;
        uVar3 = uVar3 + 0x88;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
    return;
  }
  FUN_0064e7d0(s_Failed_to_set_cooperative_level__00752e00,iVar1);
  (**(code **)(*DAT_00806ba0 + 8))(DAT_00806ba0);
  DAT_00806ba0 = (int *)0x0;
  return;
}

