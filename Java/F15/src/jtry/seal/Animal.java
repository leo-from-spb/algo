package jtry.seal;

public abstract sealed class Animal permits Cat, Dog {

    public abstract void voice();

    protected void say(String s) {
        System.out.println(s);
    }

}
