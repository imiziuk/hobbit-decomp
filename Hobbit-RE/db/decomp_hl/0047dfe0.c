
void __thiscall FUN_0047dfe0(int param_1,float param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d2468;
  pvStack_c = ExceptionList;
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((uVar1 & 2) != 0) {
    fVar2 = param_2 + *(float *)(param_1 + 0x14);
    ExceptionList = &pvStack_c;
    *(float *)(param_1 + 0x14) = fVar2;
    if ((uVar1 & 4) == 0) {
      if (*(float *)(param_1 + 8) <= fVar2) {
        *(ushort *)(param_1 + 0x10) = uVar1 | 4;
        FUN_0047dcc0();
      }
      iVar3 = FUN_0047f500();
      if (iVar3 != 0) {
        param_2 = *(float *)(param_1 + 0x70) - param_2;
        *(float *)(param_1 + 0x70) = param_2;
        if ((param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) &&
           (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 100))) {
          if ((*(ushort *)(param_1 + 0x10) & 4) != 0) {
            *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfffb;
            FUN_0064e7d0(s_Overriding_cinema_action_Done_th_007285c8);
          }
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          iVar3 = FUN_00549470(param_1 + 0x54);
          FUN_00649b20(*(int *)(param_1 + 0x68) * 0x50 + *(int *)(iVar3 + 0x58));
          uStack_4 = 0;
          FUN_0047dac0(auStack_38);
          uStack_4 = 0xffffffff;
          FUN_00649ba0();
          FUN_00549580(param_1 + 0x54);
        }
      }
      if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
        FUN_0064e870(6,s_CINEMA__Finished_animation_007285ac);
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

