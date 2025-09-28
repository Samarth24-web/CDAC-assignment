import { Component  } from "react";

export default class DemoClass extends Component{

    /////  mounting methods

    constructor(props){
        super(props);
        console.log("this is a constructor.")
        this.state={
            a:10
        }
        this.click = this.click.bind(this);
    }
    click(){
      this.setState({a:this.state.a+1});
    }

   

     componentDidMount(){
        console.log("this is comonenet did mount method");
        return true;
    }

    //////  updating methods

     shouldComponentUpdate(nextProps, nextState) {
    if (this.state.a !== nextState.a) {
        console.log("s c u")
      return true; 
    }
    return false;
  }
       componentDidUpdate(){
        console.log("this is comp did update meth");
        return true;
      }
      getSnapshotBeforeUpdate(){
        console.log("this is component should method update method")
        return true;
    }

 componentWillUnmount(){
        console.log("this is component will unmount method")
        return true;
    }


    render(){
        console.log("this is render method.");

        return(<>
        this is a react class
        <button onClick={this.click}>entter</button>
        <h1>val : {this.state.a}</h1>
        </>)
    }

     static getDerivedStateFromProps(){
        console.log("this is a getDerivedProps method");
        return true;
    }
}