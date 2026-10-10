
undefined4 __thiscall FUN_00454440(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 uStack_10c;
  undefined4 auStack_10b [63];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d00fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x270) = param_3[0x94];
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00647e40();
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x274) = param_3[0x94];
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_00647e40();
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x278) = param_3[0x94];
        uVar2 = 1;
      }
      else {
        iVar1 = FUN_00647e40();
        if (iVar1 == 0) {
          if (*param_3 == 0xe) {
            FUN_0064a2e0();
            uStack_10c = 0;
            puVar3 = auStack_10b;
            for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            *(undefined2 *)puVar3 = 0;
            FUN_00648a10();
            FUN_00649b20(&uStack_10c);
            FUN_00453ce0();
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          iVar1 = FUN_00647e40();
          if (iVar1 == 0) {
            FUN_0064a2e0();
            uVar2 = 1;
          }
          else {
            iVar1 = FUN_00647e40();
            if (iVar1 == 0) {
              *(int *)(param_1 + 0x3b0) = param_3[0x94];
              uVar2 = 1;
            }
            else {
              iVar1 = FUN_00647e40();
              if (iVar1 == 0) {
                *(int *)(param_1 + 0x3b4) = param_3[0x94];
                uVar2 = 1;
              }
              else {
                iVar1 = FUN_00647e40();
                if (iVar1 == 0) {
                  *(int *)(param_1 + 0x3cc) = param_3[0x93];
                  uVar2 = 1;
                }
                else {
                  iVar1 = FUN_00647e40();
                  if (iVar1 == 0) {
                    FUN_00453500();
                    DAT_00724fa4 = 0;
                    FUN_00649b20();
                    uStack_4 = 0;
                    FUN_00453740();
                    *(undefined4 *)(param_1 + 0x2fc) = 0;
                    uStack_4 = 0xffffffff;
                    FUN_00649ba0();
                    uVar2 = 1;
                  }
                  else {
                    uVar2 = FUN_004ab750();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar2;
}

